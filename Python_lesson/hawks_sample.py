import pandas as pd
tables = pd.read_html('https://www.softbankhawks.co.jp/team/player/detail/2017_13.html', flavor='bs4')

#for i in range(11):
#    table = tables[(i)]
#    table.to_csv("sample.csv", mode='a',encoding='utf-8', index_label="福岡選挙区")


print(tables[0])
