#モジュールのインポート
import os, tkinter, tkinter.filedialog, tkinter.messagebox

#フォルダ選択ダイアログの表示
root = tkinter.Tk()
root.withdraw()

fType = ("","*")
iDir = os.path.abspath(os.path.dirname(__file__))
tkinter.messagebox.showinfo('プログラム名','対象ディレクトリを選択してください！')

dir = tkinter.filedialog.askdirectory(initialdir = iDir)

#処理ディレクトリパスの出力
tkinter.messagebox.showinfo('プログラム名', dir)