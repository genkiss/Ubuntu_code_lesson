/*
    読み込んだ２つの整数値の大きい方の値を求めて表示（条件演算子）
*/

#include <stdio.h>

int main(void)
{
    int n1, n2, max;

    puts("２つの整数を入力してください。");
    printf("整数１ : "); scanf("%d", &n1);
    printf("整数２ : "); scanf("%d", &n2);

    max = (n1 > n2) ? n1 : n2;  /*大きい方の値をmaxに代入*/

    printf("大きい方の値は%dです。\n", max);

    return 0;
}