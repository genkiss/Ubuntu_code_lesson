/*
    読み込んだ2つの整数値の大きい方の値を表示
*/

#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("2つの整数を入力してください。");
    printf("整数１ : "); scanf("%d", &n1);
    printf("整数２ : "); scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("大きい方の値は%dです。\n", n1);
    }else{
        printf("大きい方の値は%dです。\n", n2);
    }

    return 0;

}