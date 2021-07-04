# python json2rst.py

import inflection
from api import get_api_type_names, get_methods, get_cpp_type

OUT_DOC_PATH = "../docs"
OUT_TG_API_PATH = OUT_DOC_PATH + "/api/tg"


api_type_names = get_api_type_names()
api_type_names = sorted(api_type_names, key=lambda api_name: get_cpp_type(api_name).cpp_name)


out_types = open(OUT_TG_API_PATH + '/types.rst', 'w')

out_types.write(""".. _banana-api-tg-types:

Telegram Types
==============

The page contains all information about telegram API types.

File
   ``#include <banana/types.hpp>``

.. toctree::
   :name: api_tg_types

""")

for api_name in api_type_names:
    cpp_type = get_cpp_type(api_name)
    doc_name = inflection.underscore(api_name)
    out_types.write(f"   {cpp_type.cpp_name} <types/{doc_name}>\n")

    with open(OUT_TG_API_PATH + f'/types/{doc_name}.rst', 'w') as out_type:
        out_type.write(f'''.. _banana-api-tg-types-{doc_name}:

{cpp_type.cpp_name}
{'=' * len(cpp_type.cpp_name)}

.. cpp:struct:: banana::api::{cpp_type.cpp_name}

   {cpp_type.description}
''')
        for field in cpp_type.fields:
            type_name = get_cpp_type(field['type']).cpp_name
            if field['optional']:
                type_name = f"optional_t<{type_name}>"

            out_type.write(f'''
   .. cpp:member:: {type_name} {field['name']}

   {field['description']}
''')

api_methods = get_methods()

out_methods = open(OUT_TG_API_PATH + '/methods.rst', 'w')

out_methods.write(""".. _banana-api-tg-methods:

Telegram API Methods
====================

The page contains all information about telegram API methods

File
   ``#include <banana/api.hpp>``

.. toctree::
   :name: api_tg_methods

""")

for name, method in api_methods.items():
    doc_name = inflection.underscore(name)
    out_methods.write(f"   {doc_name} <methods/{doc_name}>\n")

    with open(OUT_TG_API_PATH + f'/methods/{doc_name}.rst', 'w') as out_method:
        return_type = get_cpp_type(method['return_type'])

        out_method.write(f'''.. _banana-api-tg-methods-{doc_name}:

{doc_name}
{'=' * len(doc_name)}

.. cpp:namespace:: banana::api
.. cpp:function:: template <class Agent> \\
                  api_result<{return_type.cpp_name}, Agent&&> {doc_name}(Agent&& agent, {doc_name}_args_t args)

   ``agent`` is any object satisfying :ref:`agent concept <banana-api-banana-agents>`.

   {method['desc']}

.. cpp:struct:: {doc_name}_args_t

   Arguments that should be passed to :cpp:func:`{doc_name}`.

''')

        for field in get_cpp_type(name + 'Args').fields:
            type_name = get_cpp_type(field['type']).cpp_name
            if field['optional']:
                type_name = f"optional_t<{type_name}>"

            out_method.write(f'''
   .. cpp:member:: {type_name} {field['name']}

   {field['description']}
''')
