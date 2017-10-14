/*
    演習2-2 ２つの整数を読み込んで 和と積を表示する
*/
#include <stdio.h>

int main(void)
{
    int na,nb;

    puts("２つの整数を入力してください。");

    printf("整数A : ");   scanf("%d", &na);
    printf("整数B : ");   scanf("%d", &nb);

    printf("入力された２つの整数の和は%dで、積は%dです。", na + nb, na * nb);

    return (0);

}