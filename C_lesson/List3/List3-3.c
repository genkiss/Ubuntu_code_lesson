/*
    読み込んだ数値は5で割り切れないか割り切れるか
*/

#include<stdio.h>

int main(void)
{
    int vx;

    printf("整数を入力してください : ");
    scanf("%d", &vx);

    if (vx % 5){
        puts("その整数は5で割り切れません。");
    }else{
        puts("その整数は5で割り切れます。");
    }

    return 0;

}