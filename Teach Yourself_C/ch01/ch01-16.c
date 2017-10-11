/*戻り値なしのreturn*/

#include <stdio.h>

void func1(void);   /*プロトタイプ*/

int main(void)
{
    func1();

    return 0;
}

void func1(void)
{
    printf("この文は表示される");
    return; /*値を伴わずに戻る*/
    printf("この文は決して表示されることはない");
}