/*
    読み込んだ整数値を3で割った剰余を表示
*/

#include <stdio.h>

int main(void)
{
    int num;

    printf("整数を入力してくだい : ");
    scanf("%d", &num);

    if (num % 3 == 0){
        puts("その数は３で割り切れます。");
    }else if (num % 3 == 1){
        puts("その数を３で割った余りは1です。");
    }else{
        puts("その数を３で割った余りは２です。");
    }

    return 0;
}