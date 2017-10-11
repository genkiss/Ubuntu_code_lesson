/* 入力された数値を２乗した数値を返す 2乗の計算はget_sqr()関数で行う*/

#include <stdio.h>

int get_sqr(void); /*プロトタイプ*/

int main(void)
{
    int sqr;

    sqr = get_sqr();
    printf("2乗値: %d", sqr);

    return 0;
}

int get_sqr(void)
{
    int num;

    printf("数値を入力してください: ");
    scanf("%d", &num);
    return num*num; /*値を２乗しreturnで返す*/
}