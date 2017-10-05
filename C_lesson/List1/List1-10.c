/*
    読み込んだ数値の10の倍数を表示
*/

#include <stdio.h>

int main(void)
{
    int no;

    printf("数値をを入力してください:");
    scanf("%d", &no);

    printf("その数値の10倍は%dです。\n", 10 * no);

    return (0);

}