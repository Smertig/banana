from bs4 import BeautifulSoup
import pandas
import json
import re

soup = BeautifulSoup(open("api.html").read(), features='lxml')

types = {}
methods = {}

type_re = '([ a-zA-Z].*?)'
single_re = [
    re.compile(rf'Returns (?:the uploaded )?(?:.* as )?(?:a )?(?:the )?{type_re}(?: of the sent message)?(?: object| objects)?(?: on success)?\.'),
    re.compile(f'An {type_re} objects is returned'),
    re.compile(f'On success, (?:a )?(?:the sent )?{type_re}(?: object)? is returned'),
    re.compile(f'On success, returns an {type_re} object(s)?'),
]

specific_re = [
    (re.compile('On success, an array of Messages that were sent is returned'), 'Array of Message'),
    (re.compile('the stopped Poll with the final results'), 'Poll'),
    (re.compile('the edited Message is returned, otherwise True is returned'), 'Message or True'),
    (re.compile('the sent Message is returned, otherwise True is returned'), 'Message or True'),
    (re.compile('returns the edited Message, otherwise returns True\\.'), 'Message or True')
]
def extract_return_type(s: str):
    for r, res in specific_re:
        m = re.search(r, s)
        if m:
            return res

    for r in single_re:
        m = re.search(r, s)
        if m:
            res = str(m.group(1))
            res = res.replace('an array of ', 'Array of ')
            res = res.replace('the sent Messages', 'Message')
            return res


def normalize_type_name(s: str) -> str:
    s = s.replace(' and ', ' or ').replace(', ', ' or ')
    if ' or ' in s:
        return ' or '.join(normalize_type_name(t) for t in s.split(' or '))
    elif s == 'Int':
        return 'Integer'
    elif s == 'Float number':
        return 'Float'
    elif s == 'True':
        return 'Boolean'
    else:
        return s


for table in soup.find_all('table'):
    h4 = table.find_previous_sibling('h4')
    p = h4.find_next_sibling('p')

    fields = pandas.read_html(str(table))[0]

    if h4.text[0].isupper():
        jfields = []
        for index, row in fields.iterrows():
            name = row['Field']
            field_type = row['Type']
            description = row['Description']

            is_optional = False

            if description.startswith('Optional. '):
                is_optional = True
                description = description[len('Optional. '):]
            
            jfields.append({
                'name': name,
                'type': normalize_type_name(field_type),
                'optional': is_optional,
                'description': description
            })
        # type
        types[h4.text] = {
            'desc': p.text,
            'fields': jfields
        }
    else:
        # method
        jparams = []

        assert list(fields.columns.values) == [ 'Parameter', 'Type', 'Required', 'Description' ]
        for index, row in fields.iterrows():
            name = row['Parameter']
            param_type = row['Type']

            assert row['Required'] in ('Yes', 'Optional')
            is_optional = row['Required'] == 'Optional'

            description = row['Description']

            jparams.append({
                'name': name,
                'type': normalize_type_name(param_type),
                'optional': is_optional,
                'description': description
            })

        return_type = extract_return_type(p.text)
        assert return_type, 'return type not found in "' + p.text + '"'
        #print("'{}'".format(return_type))

        methods[h4.text] = {
            'desc': p.text,
            'params': jparams,
            'return_type': normalize_type_name(return_type)
        }

aliases = ['InputMessageContent', 'InlineQueryResult', 'InputMedia', 'PassportElementError']

for alias in aliases:
    atag = soup.find('a', class_='anchor', href='#'+alias.lower())
    desc = atag.find_next('p').text
    desc = desc[:desc.rfind('.')+1]

    types[alias] = {
        'desc': desc,
        'fields': [
            {
                'name': '__alias__',
                'type': ' or '.join(litag.text for litag in atag.find_next('ul').find_all('li')),
                'optional': False,
                'description': ''
            }
        ]
    }

methods['getMe'] = {
    'desc': 'A simple method for testing your bot\'s auth token. Requires no parameters. Returns basic information about the bot in form of a User object.',
    'params': [],
    'return_type': 'User'
}

types['CallbackGame'] = {
    'desc': 'A placeholder, currently holds no information. Use BotFather to set up your game.',
    'fields': []
}

types['InputFile'] = {
    'desc': 'This object represents the contents of a file to be uploaded. Must be posted using multipart/form-data in the usual way that files are uploaded via the browser.',
    'fields': []
}

json.dump({
    'types': types,
    'methods': methods
}, open('api.json', 'w'), indent='    ', sort_keys=True)

