import json
import inflection


def sort_required_first(l):
    return sorted(l, key=lambda item: item['optional'])


JSON_API_PATH = "./api.json"
db = json.load(open(JSON_API_PATH, 'r', encoding='utf8'))

_types = db['types']
for _type in _types.values():
    _type['fields'] = sort_required_first(_type['fields'])


_methods = db['methods']
_cpp_types = dict()

_api_types_names = list(_types.keys())


# generate additional helper types 'method_name_args_t'
for name, method in _methods.items():
    _types[name + 'Args'] = {
        'desc': 'Arguments to ' + inflection.underscore(name) + ' method',
        'fields': sort_required_first({
            "description": param['description'],
            "name": param['name'],
            "optional": param['optional'],
            "type": param['type']
        } for param in method['params'])
    }


class CppType:
    def __init__(self, api_name):
        self.api_name = api_name
        self.cpp_name = CppType.to_cpp_type_name(api_name, False)
        self.qual_cpp_name = CppType.to_cpp_type_name(api_name, True)

        assert isinstance(self.api_name, str)
        assert isinstance(self.cpp_name, str)

    @property
    def description(self):
        return _types[self.api_name]['desc']

    @property
    def fields(self):
        return _types[self.api_name]['fields']

    @property
    def artificial(self):
        return self.api_name.endswith('Args')

    @property
    def from_api(self):
        return self.api_name in _types

    @property
    def standard_type(self):
        return CppType.is_standard_type(self.api_name)

    @property
    def is_alias(self):
        return self.aliased_cpp_type is not None

    def get_cpp_name(self, is_qualified: bool):
        return self.qual_cpp_name if is_qualified else self.cpp_name

    @staticmethod
    def to_cpp_type_name(s, is_qualified: bool) -> str:
        if CppType.is_standard_type(s):
            return CppType.to_standard_type(s)

        if s.startswith('Array of '):
            return 'array_t<{}>'.format(get_cpp_type(s[len('Array of '):]).get_cpp_name(is_qualified))

        if s.find(' or ') >= 0:
            variant_names = [get_cpp_type(part).get_cpp_name(is_qualified) for part in s.split(' or ')]
            return 'variant_t<{}>'.format(", ".join(variant_names))

        return ('api::' if is_qualified else '') + inflection.underscore(s) + '_t'

    @staticmethod
    def get_all_value_types(api_name: str):
        if CppType.is_standard_type(api_name):
            return set()

        if api_name.startswith('Array of '):
            return CppType.get_all_value_types(api_name[len('Array of '):])

        if api_name.find(' or ') >= 0:
            return set.union(*[CppType.get_all_value_types(part) for part in api_name.split(' or ')])

        return {api_name}

    def get_api_deps(self):
        if self.standard_type:
            return set()

        assert self.api_name in _types, "unknown type: " + self.api_name

        required_fields = set([field['type'] for field in _types[self.api_name]['fields'] if not field['optional']])

        return set.union(set(), *map(CppType.get_all_value_types, required_fields))

    @property
    def aliased_cpp_type(self):
        if self.api_name not in _types:
            return None

        fields = _types[self.api_name]['fields']
        if len(fields) != 1:
            return None

        field = fields[0]
        return get_cpp_type(field['type']).cpp_name if field['name'] == '__alias__' else None

    @staticmethod
    def to_standard_type(type_name):
        return {
            'String': 'string_t',
            'Float': 'float_t',
            'Boolean': 'boolean_t',
            'Integer': 'integer_t',
            'CallbackGame': 'callback_game_t',
            'InputFile': 'input_file_t'
        }.get(type_name, None)

    @staticmethod
    def is_standard_type(type_name):
        return CppType.to_standard_type(type_name) is not None


def get_cpp_type(api_name: str) -> CppType:
    if api_name not in _cpp_types:
        _cpp_types[api_name] = CppType(api_name)
    return _cpp_types[api_name]


def get_api_type_names():
    return _api_types_names


def get_methods():
    return _methods
