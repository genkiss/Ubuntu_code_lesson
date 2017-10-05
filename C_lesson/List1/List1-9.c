/*
    読み込んだ数値の値を表示して確認
*/

#include <stdio.h>

int main(void)
{

    int no;

    printf("整数を入力してください：");
    scanf("%d", &no);

    printf("あなたは%dと入力しましたね。\n", no);

    return (0);

}