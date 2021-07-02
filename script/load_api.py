import requests

API_URL = 'https://ark0f.github.io/tg-bot-api/custom.json'

r = requests.get(API_URL)
with open('custom.json', 'w', encoding='utf8') as file:
    file.write(r.text)
