/*
    return 値;で呼び出し元に値を返す
*/

#include <stdio.h>

int func(void); /*関数のプロトタイプ*/

int main(void)
{
    int num;

    num = func();
    printf("%d", num);

    return 0;
}

int func(void)
{
    return 10;
}