import json
import marko

with open('custom_v2.json', encoding='utf8') as f:
    custom_json = json.load(f)

types = {}
methods = {}

TYPE_MAPPING = {
    'integer': 'Integer',
    'bool': 'Boolean',
    'string': 'String',
    'float': 'Float',
}


class RawStringRenderer(marko.Renderer):
    def render_paragraph(self, element):
        return f"{self.render_children(element)}"

    def render_list(self, element: marko.block.List):
        return "; ".join(self.render(child) for child in element.children)

    def render_list_item(self, element):
        return f"{self.render_children(element)}"

    def render_quote(self, element):
        assert False, element

    def render_fenced_code(self, element):
        assert False, element

    def render_code_block(self, element):
        assert False, element

    def render_html_block(self, element):
        assert False, element

    def render_thematic_break(self, element):
        assert False, element

    def render_heading(self, element):
        assert False, element

    def render_setext_heading(self, element):
        assert False, element

    def render_blank_line(self, element):
        return " "

    def render_link_ref_def(self, element):
        assert False, element

    def render_emphasis(self, element):
        return f"{self.render_children(element)}"

    def render_strong_emphasis(self, element):
        return f"{self.render_children(element)}"

    def render_inline_html(self, element):
        return element.children

    def render_plain_text(self, element):
        assert False, element

    def render_link(self, element):
        return f"{self.render_children(element)}"

    def render_auto_link(self, element):
        assert False, element

    def render_image(self, element):
        assert False, element

    def render_literal(self, element):
        return self.render_raw_text(element)

    def render_raw_text(self, element):
        return element.children

    def render_line_break(self, element):
        return ' '

    def render_code_span(self, element):
        return element.children


markdown = marko.Markdown(renderer=RawStringRenderer)


def convert_text(s: str) -> str:
    return markdown(s)


def extract_type(d):
    if isinstance(d, str):
        return d

    type_name = d['type']

    if type_name == 'reference':
        return extract_type(d['reference'])

    if type_name == 'array':
        return 'Array of ' + extract_type(d['array'])

    if type_name == 'any_of':
        return ' or '.join(map(extract_type, d['any_of']))

    return TYPE_MAPPING[type_name]


def convert_param(param):
    result = {
        'description': convert_text(param['description']),
        'name': param['name'],
        'optional': not param['required'],
        'type': extract_type(param['type_info'])
    }

    default_value = param['type_info'].get('default')
    if default_value is not None:
        result['default'] = default_value

    return result


for jtype in custom_json['objects']:
    assert 'type' in jtype
    if jtype['type'] == 'properties':
        types[jtype['name']] = {
            'desc': convert_text(jtype['description']),
            'fields': [convert_param(field) for field in jtype.get('properties', [])]
        }
    elif jtype['type'] == 'any_of':
        types[jtype['name']] = {
            'desc': convert_text(jtype['description']),
            'fields': [{
                'description': '',
                'name': '__alias__',
                'optional': False,
                'type': extract_type(jtype)
            }]
        }
    elif jtype['type'] == 'unknown':
        types[jtype['name']] = {
            'desc': jtype['description'],
            'fields': []
        }
    else:
        assert False, jtype


for jmethod in custom_json['methods']:
    methods[jmethod['name']] = {
        'desc': convert_text(jmethod['description']),
        'params': [convert_param(param) for param in jmethod.get('arguments', [])],
        'return_type': extract_type(jmethod['return_type'])
    }


json.dump({
    'types': types,
    'methods': methods
}, open('api.json', 'w', encoding='utf8'), indent='    ', sort_keys=True, ensure_ascii=False)
