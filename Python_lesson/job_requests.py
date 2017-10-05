import requests,lxml.html

res=requests.get("https://paiza.jp/career/job_offers")
root=lxml.html.fromstring(res.text).getroottree()

for i in root.xpath('//a[@class="titleLink"]'):
    if "エンジニア" in i.text:
        print(i.text)
