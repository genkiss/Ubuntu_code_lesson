/*
    ３つの整数値を読み込んで合計値と平均値を表示
*/

#include <stdio.h>

int main(void)
{
    int na, nb, nc;
    int sum;
    double ave;

    puts("３つの整数を入力してください。");

    printf("整数 A : "); scanf("%d", &na);
    printf("整数 B : "); scanf("%d", &nb);
    printf("整数 C : "); scanf("%d", &nc);

    sum = na + nb + nc;
    ave = (double) sum / 3;

    printf("それらの合計は%5dです。\n", sum);
    printf("それらの平均は%5.1fです。\n", ave);

    return 0;


}
