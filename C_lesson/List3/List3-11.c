/*
    読み込んだ２つの整数値の大きい方の値を求めて表示
*/

#include <stdio.h>

int main(void)
{
    int n1, n2, max;

    printf("整数 : "); scanf("%d", &n1);
    printf("整数 : "); scanf("%d", &n2);

    if (n1 > n2){
        max = n1;
    }else{
        max = n2;
    }
    /*if (n1 > n2) max = n1 else max = n2って書いてもいいらしい*/
    
    printf("大きい方の値は%dです。\n", max);

    return 0;

}