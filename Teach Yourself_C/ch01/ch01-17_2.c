/*入力されたドルをポンドに変換*/

#include <stdio.h>

int convert(void);

int main(void)
{

    printf("%d",convert());

    return 0;

}

int convert(void)
{
    int dollars;
    
    printf("ドルを入力 : "); scanf("%d", &dollars);
    
    return dollars / 2;

}