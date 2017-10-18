/*
    ２つの実数平均値 キャスト版
*/

#include <stdio.h>

int main(void)
{
    int na,nb;

    puts("２つの整数を入力してください。");
    printf("整数 A : "); scanf("%d", &na);
    printf("整数 B : "); scanf("%d", &nb);

    printf("それらの平均は%fです。\n", (double)(na + nb)/2);

    return 0;
    
}