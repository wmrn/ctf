//暗号化・復号化のコード
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[]){
  int i;
  int j;
  int key = atoi(argv[2]);
  const char* flag = argv[1];
  printf("cpaw{");
  for(i = key - 1; i <= strlen(flag); i+=key) for(j = i; j>= i - key + 1; j--) printf("%c", flag[j]);
  printf("}");
  return 0;
}

//コマンド側
//「.cなしの名前」＋「暗号化or復号化の文」＋「何個ごとに分けるかの数」
//「＋」のところはスペースでつなげる

//ブロック暗号とは、データを一定の長さのブロックごとに区切り、ブロック単位で暗号化を行う暗号のこと。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int argc: 引数の総個数（プログラム名も含む）
//char *argv[]: 引数 (argv[1]==「暗号化or復号化の文」,argv[2]==「何個ごとに分けるかの数」)
int main(int argc, char* argv[]){
    int i;
    int j;
  //コンパイラした後、コマンド側で実行させるときにプログラム名が最初に来て、そのプログラム名も含めて数えるから「1」から本命
   int key = atoi(argv[2]); //char型のものをint型に変換 //アルファベットは「0」になる
  const char* flag = argv[1]; //「const char *」というデータ型は、書き換えできない(読み取り専用の)文字列に対して使います。
 //flagっていう配列に一文字ずつ配列に入ってる 
  printf("cpaw{");
  for(i = key - 1; i <= strlen(flag); i+=key){ //文字列strの長さを返す。//ここでブロックに区切ってる
    for(j = i; j>= i - key + 1; j--){ //ブロックをさかさまに読む
     printf("%c", flag[j]);
   }
  }
  printf("}");  
  return 0;
}