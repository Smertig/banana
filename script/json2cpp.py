# python json2cpp.py

import inflection
import networkx
import itertools
from api import CppType, get_api_type_names, get_methods, get_cpp_type

OUT_INCLUDE_PATH = "../include/banana/detail/generated"
OUT_SOURCE_PATH = "../source/generated"

out_types = open(OUT_INCLUDE_PATH + '/types.hpp', 'w')
out_api = open(OUT_INCLUDE_PATH + '/api.hpp', 'w')
out_api_fwd = open(OUT_INCLUDE_PATH + '/api_fwd.hpp', 'w')
out_api_enums = open(OUT_INCLUDE_PATH + '/api_enums.hpp', 'w')
out_api_traits = open(OUT_INCLUDE_PATH + '/api_traits.hpp', 'w')
out_ser_impl = open(OUT_SOURCE_PATH + '/serialize_impl.cxx', 'w')
out_resp_impl = open(OUT_SOURCE_PATH + '/resp_impl.cxx', 'w')
out_meta = open(OUT_INCLUDE_PATH + '/meta.hpp', 'w')

out_api.write("#include <banana/detail/api_header.hpp>\n\n")
out_types.write("#include <banana/detail/types_header.hpp>\n\n")
out_meta.write("#include <banana/detail/meta_header.hpp>\n\n")


def sort_by_cpp_name(names):
    return sorted(names, key=lambda api_name: get_cpp_type(api_name).cpp_name)


api_type_names = get_api_type_names()
api_methods = get_methods()
api_type_names = sort_by_cpp_name(api_type_names)
api_refl_type_names = sort_by_cpp_name(api_type_names + [f"{method_name}Args" for method_name in api_methods])


def dump_type(out, cpp_type: CppType):
    out.write('// {}\n'.format(cpp_type.description))

    if cpp_type.aliased_cpp_type:
        out.write(f'using {cpp_type.cpp_name} = {cpp_type.aliased_cpp_type};\n\n')
        return

    prepared_fields = []

    for field in cpp_type.fields:
        field_cpp_type_name = get_cpp_type(field["type"]).cpp_name

        if field['optional']:
            field_cpp_type_name = 'optional_t<{}>'.format(field_cpp_type_name)

        prepared_fields.append((field_cpp_type_name, field['name'], field['description']))

    if prepared_fields:
        max_type_name_len = max(len(field[0]) for field in prepared_fields)
        max_field_name_len = max(len(field[1]) for field in prepared_fields)

    out.write(f'struct {cpp_type.cpp_name} {{\n')
    for field in prepared_fields:
        out.write('    {} {} // {}\n'.format(field[0].ljust(max_type_name_len), (field[1] + ';').ljust(max_field_name_len + 1), field[2]))
    out.write('};\n\n')


out_types.write('namespace banana::api {\n\n')

# forward declarations

for api_name in api_type_names:
    cpp_type = get_cpp_type(api_name)
    if cpp_type.aliased_cpp_type is None and not cpp_type.artificial:
        out_types.write(f"struct {cpp_type.cpp_name};\n")
out_types.write('\n')

# dependencies graph

G = networkx.DiGraph()

for api_name in api_type_names:
    for dep in get_cpp_type(api_name).get_api_deps():
        G.add_edge(dep, api_name)

out_types.write("/// Types without dependencies\n\n")

for api_name in api_type_names:
    if not G.has_node(api_name):
        dump_type(out_types, get_cpp_type(api_name))

out_types.write("/// Types with dependencies\n\n")

for component in networkx.weakly_connected_components(G):
    for api_name in networkx.lexicographical_topological_sort(G.subgraph(component)):
        dump_type(out_types, get_cpp_type(api_name))

out_types.write('} // banana::api\n')


def dump_type_reflection(cpp_type: CppType):
    out_meta.write('template <>\n')
    out_meta.write(f'struct reflector<api::{cpp_type.cpp_name}> {{\n')
    out_meta.write('    template <class F>\n')
    out_meta.write('    static void for_each_field(F&& f) {\n')
    out_meta.write('        using namespace std::literals;\n')
    for field in cpp_type.fields:
        name = field['name']
        out_meta.write(f'        f("{name}"sv, &api::{cpp_type.cpp_name}::{name});\n')
    out_meta.write('    }\n')
    out_meta.write('};\n')
    out_meta.write('\n')

    out_meta.write('template <>\n')
    out_meta.write(f'constexpr bool is_reflectable_v<api::{cpp_type.cpp_name}> = true;\n')
    out_meta.write('\n')

    out_meta.write('template <>\n')
    out_meta.write(f'constexpr std::string_view name_of<api::{cpp_type.cpp_name}> = "{cpp_type.cpp_name}";\n')
    out_meta.write('\n')

out_meta.write('namespace banana::meta {\n\n')

for api_name in api_refl_type_names:
    cpp_type = get_cpp_type(api_name)
    if cpp_type.aliased_cpp_type:
        continue
    dump_type_reflection(cpp_type)

out_meta.write('} // banana::meta\n')

def get_param_type(p):
    t = get_cpp_type(p['type']).cpp_name
    if p['optional']:
        t = 'optional_t<{}>'.format(t)
    return t

out_api.write('namespace banana::api {\n\n')
out_api_fwd.write('namespace banana::api {\n\n')
out_api_enums.write('namespace banana::api {\n\n')

deser_types = set()
ser_types = set()

out_api_enums.write('enum class method {\n')

for name, method in api_methods.items():
    uname = inflection.underscore(name)
    return_type = get_cpp_type(method['return_type']).qual_cpp_name
    args_cpp_type = get_cpp_type(name + 'Args')

    dump_type(out_api, args_cpp_type)
    out_api_fwd.write(f'struct {args_cpp_type.cpp_name};\n')

    params_info = '@param connector Any object satisfying connector concept (see `banana::connector` namespace)' +\
                  ''.join(f'\n * @param args__{param["name"]} {param["description"]}' for param in method['params'])

    out_api.write(f'''/**
 * {method["desc"]}
 * 
 * {params_info}
 */
template <class Connector>
api_result<{return_type}, Connector&&> {uname}(Connector&& connector, {args_cpp_type.cpp_name} args{" = {}" if not method['params'] else ""}) {{
    return call(static_cast<Connector&&>(connector), static_cast<{args_cpp_type.cpp_name}&&>(args));
}}

''')
    out_api_enums.write(f'    {uname},\n')

    out_api_traits.write(f'''template <>
struct api_traits<api::method::{uname}> {{
    static inline constexpr std::string_view native_name = "{name}";
    static inline constexpr std::string_view pretty_name = "{uname}";

    using request_type  = {args_cpp_type.qual_cpp_name};
    using response_type = {return_type};
}};

template <>
struct detail::by_request_type_impl<{args_cpp_type.qual_cpp_name}> {{
    using type = api_traits<api::method::{uname}>;
}};

''')

    deser_types.add(return_type)
    ser_types.add(args_cpp_type.qual_cpp_name)

out_api_enums.write("};\n\n")

out_api.write('} // namespace banana::api\n')
out_api_fwd.write('\n} // namespace banana::api\n')
out_api_enums.write('} // namespace banana::api\n')

for type_name in sorted(ser_types):
    out_ser_impl.write(f'template serialized_args_t<{type_name}> serialize_args<{type_name}>({type_name} value);\n')

for type_name in sorted(deser_types):
    out_resp_impl.write(f'template struct response_handler<{type_name}>;\n')
