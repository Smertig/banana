import requests

API_URL = 'https://core.telegram.org/bots/api'

r = requests.get(API_URL)
with open('api.html', 'w', encoding='utf8') as file:
    file.write(r.text)
