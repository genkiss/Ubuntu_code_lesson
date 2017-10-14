/*
    演習2-3　実数値を入力し そのまま表示
*/

#include <stdio.h>

int main(void)
{

    double vx;

    printf("実数を入力してください : ");     scanf("%lf", &vx);
    printf("あなたは%fと入力しましたね。\n", vx);

    return (0);

}