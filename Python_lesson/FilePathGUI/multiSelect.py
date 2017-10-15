#モジュールのインポート
import os, tkinter, tkinter.filedialog, tkinter.messagebox

#ファイル選択ダイアログ
root = tkinter.Tk()
root.withdraw()

fType = [("","*")]
iDir = os.path.abspath(os.path.dirname(__file__))
tkinter.messagebox.showinfo('プログラム名','処理ファイルを選択してください。')

#１つのファイルの場合 askopenfilename
file = tkinter.filedialog.askopenfilenames(filetypes = fType, initialdir = iDir)

#選択ファイルリスト作成 タプルをリストに変換
list = list(file)
tkinter.messagebox.showinfo('プログラム名',list)