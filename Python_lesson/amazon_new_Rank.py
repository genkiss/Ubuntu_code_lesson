import sys

import requests
from bs4 import BeautifulSoup


def in_num():
    print("ジャンルは？\
            \n1.Amazonビデオ\
            \n2.Androidアプリ\
            \n3.DIY・工具\
            \n4.DVD\
            \n5.Kindleストア\
            \n6.PCソフト\
            \n7.おもちゃ\
            \n8.ゲーム\
            \n9.シューズ＆バッグ\
            \n10.ジュエリー\
            \n11.スポーツ＆アウトドア\
            \n12.デジタルミュージック\
            \n13.ドラッグストア\
            \n14.パソコン・周辺機器\
            \n15.ビューティー\
            \n16.ファッション\
            \n17.ベビー＆マタニティ\
            \n18.ペット用品\
            \n19.ホビー\
            \n20.ホーム＆キッチン\
            \n21.ミュージック\
            \n22.大型家電\
            \n23.家電＆カメラ\
            \n24.文房具・オフィス用品\
            \n25.服＆ファッション小物\
            \n26.本\
            \n27.楽器・音響機器\
            \n28.洋書\
            \n29.腕時計\
            \n30.車＆バイク\
            \n31.食品・飲料・お酒\n")

    number = input()
    
    if number == '1':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/instant-video/ref=zg_bsnr_nav_0'

    elif number == '2':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/mobile-apps/ref=zg_bsnr_nav_0'

    elif number == '3':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/diy/ref=zg_bsnr_nav_0'

    elif number == '4':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/dvd/ref=zg_bsnr_nav_0'

    elif number == '5':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/digital-text/ref=zg_bsnr_nav_0'

    elif number == '6':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/software/ref=zg_bsnr_nav_0'

    elif number == '7':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/toys/ref=zg_bsnr_nav_0'

    elif number == '8':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/videogames/ref=zg_bsnr_nav_0'

    elif number == '9':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/shoes/ref=zg_bsnr_nav_0'

    elif number == '10':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/jewelry/ref=zg_bsnr_nav_0'

    elif number == '11':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/sports/ref=zg_bsnr_nav_0'

    elif number == '12':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/dmusic/ref=zg_bsnr_nav_0'

    elif number == '13':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/hpc/ref=zg_bsnr_nav_0'

    elif number == '14':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/computers/ref=zg_bsnr_nav_0'

    elif number == '15':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/beauty/ref=zg_bsnr_nav_0'

    elif number == '16':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/fashion/ref=zg_bsnr_nav_0'

    elif number == '17':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/baby/ref=zg_bsnr_nav_0'

    elif number == '18':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/pet-supplies/ref=zg_bsnr_nav_0'

    elif number == '19':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/hobby/ref=zg_bsnr_nav_0'

    elif number == '20':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/kitchen/ref=zg_bsnr_nav_0'

    elif number == '21':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/music/ref=zg_bsnr_nav_0'

    elif number == '22':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/appliances/ref=zg_bsnr_nav_0'

    elif number == '23':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/electronics/ref=zg_bsnr_nav_0'

    elif number == '24':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/office-products/ref=zg_bsnr_nav_0'

    elif number == '25':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/apparel/ref=zg_bsnr_nav_0'

    elif number == '26':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/books/ref=zg_bsnr_nav_0'

    elif number == '27':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/musical-instruments/ref=zg_bsnr_nav_0'

    elif number == '28':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/english-books/ref=zg_bsnr_nav_0'

    elif number == '29':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/watch/ref=zg_bsnr_nav_0'

    elif number == '30':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/automotive/ref=zg_bsnr_nav_0'

    elif number == '31':
        amazon_page = 'https://www.amazon.co.jp/gp/new-releases/food-beverage/ref=zg_bsnr_nav_0'

    else:
        print("番号を入力")
    
    return amazon_page




    



############################################################
amazon_page = in_num()

print("\n選んだジャンルの新着ランキングは\n")
new_html = requests.get(amazon_page)
soup = BeautifulSoup(new_html.text, 'html.parser')

for pc in soup.findAll(class_='zg_itemRow'):
    print(pc.find(class_='zg_rankNumber').string.strip() + pc.find(class_='a-fixed-left-grid-col a-col-right').find('a').text.strip())
