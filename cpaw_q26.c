/* 
x ≡ 32134 (mod 1584891) 
x ≡ 193127 (mod 3438478) 

x = 1584891*p + 32134 = 3438478*q + 193127
    1584891*p = 3438478*q + 160993 = y
x = y + 32134 */

#include <stdio.h>
#include <stdlib.h>
int main(void){
    unsigned long long int q;
    unsigned long long int x;
    unsigned long long int y;
    unsigned long long int a;
    
    for(q=0;q<10000000;q++){
        y=3438478*q+160993;
        a=y%1584891;
        if(a==0){
            x = y + 32134;
            printf("%lld\n",x);//「%d」は、10進数で表示させるってこと
            //「long long int」を使う場合は、「d」じゃなくて「lld」
        }
    }    
}

//コマンド側
//コンパイルして実行ファイルを作成する
//「プログラム名の「.c」なし」

//表示結果
//x=35430270439
//※ちなみに「p=22355 q=10304」