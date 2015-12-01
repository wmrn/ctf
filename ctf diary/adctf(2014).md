#adctf(2014)  
今年のctfのAdventCarenderがなかったようなので、去年のを解いてみる　12/1～

##1日目　warmup
#### 知れたこと  
* miscがトリビアという意味だったこと。  
* 16進数と10進数の見分けを付けるために16進数の物には最初に「0x」を付けてある。  
　※ちなみに「0x」がついてあるままdecodeしても大丈夫だった。  
* 『ASCIIとは、アルファベットや数字、記号などを収録した文字コードの一つ。』  
※どうやらこれ、ASCIIだったみたい。まぁ、解き方は間違ってないから…。＜参考＞<http://e-words.jp/w/ASCII.html>  

#### 一言   
ぶっちゃけ私にとってはwarmupじゃなかった…。

##2日目　alert man
#### 知れたこと
* alert()  
JavaScriptの警告ダイヤログの表示(HSPで少しやった感じのもの)
* XSS  
『あるWebページにアクセスした標的のブラウザ上で、攻撃者が任意のコードを実行し得るバグ、あるいはそれを用いた攻撃手法のこと』  ＜参考＞<http://xss.hatenablog.jp/entry/2014/12/03/154132> ※ぶっちゃけこれ、XSSの問題じゃなくてalert()の表示の問題なのかな？  
* .toSource()  
.toSource前の物の中身が見れる  
* FireFoxというWebブラウザの存在
* String.fromCharCode()  
decodeをしてくれるJavaScriptのやーつ？  
＜参考＞<https://ja.wikibooks.org/wiki/JavaScript/String/fromCharCode>  
＜参考＞<http://ideone.com/GR6iuH>

#### 一言
JS知らないからwriteup読んでも全くわからんかった。いろんなwriteup読んでみたらFireFox使ってalert.toSource()を使ってflagの部分を直接取ってきてるものあってこっちならまだ理解はできた。ってことでこれを機にFireFoxを入れた。  
＜参考＞<https://wiki.mma.club.uec.ac.jp/ytoku/CTF/Writeup/AdventCalendarCTF2014/2014-12-02>  
使える言語増やさんとあかん。だけどぶっちゃけ組みたいものが出来てから増やしていきたいだからまぁいいやw
