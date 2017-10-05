import csv
import requests
from bs4 import BeautifulSoup

url = 'http://www.asahi.com/senkyo/sousenkyo46/kouho/A40.html'
kouho_html = requests.get(url)
soup = BeautifulSoup(kouho_html.text.encode(kouho_html.encoding), "html.parser")

#name = soup.find("div",{"class":"Box BdrNon"}).find("table").find_all('a')

csvFile = open("senkyo_test.csv", 'wt', newline = '', encoding = 'utf-8')
writer = csv.writer(csvFile)

table = soup.findAll("table",{"class":"snkTbl01"})[0]
rows = table.findAll("tr")

try:
    for row in rows:
        csvRow = []
        for cell in row.findAll(["td","th"]):
            csvRow.append(cell.get_text())
        writer.writerow(csvRow)

finally:
    csvFile.close()
