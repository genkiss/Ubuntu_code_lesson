#モジュールのインポート
import os, tkinter, tkinter.filedialog, tkinter.messagebox

#ファイル選択ダイアログの表示
root = tkinter.Tk()
root.withdraw()

#ファイルタイプを拡張子で限定しない場合は fType = [("","*")]
fTyp = [("","*.csv")]

iDir = os.path.abspath(os.path.dirname(__file__))
tkinter.messagebox.showinfo('プログラム名','処理ファイルを選択したください！')
file = tkinter.filedialog.askopenfilename(filetypes = fTyp,initialdir = iDir)


#処理ファイル名の出力
tkinter.messagebox.showinfo('プログラム名',file)