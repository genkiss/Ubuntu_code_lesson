/*
    ２つの整数値を読み込み 平均値を実数で表示
*/

#include <stdio.h>

int main(void)
{
    int na, nb;
    
    puts("  ２つの整数を入力してください。");
    printf("整数A : "); scanf("%d", &na);
    printf("整数B : "); scanf("%d", &nb);

    printf("それらの平均は%fです。\n", (na + nb)/2.0);

    return 0;


}