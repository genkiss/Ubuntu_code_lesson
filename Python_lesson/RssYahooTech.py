import requests
from bs4 import BeautifulSoup

y_tech_news_xml = requests.get('https://news.yahoo.co.jp/pickup/computer/rss.xml')

soup = BeautifulSoup(y_tech_news_xml.text, 'html.parser')

for news in soup.findAll('item'):
    print(news.title.string)
