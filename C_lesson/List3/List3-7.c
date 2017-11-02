/*
    読み込んだ2つの整数値は等しいか（その2）
*/

#include <stdio.h>

int main(void)
{
    int x1, x2;

    puts("2つの整数を入力してください。");
    printf("整数 1 : ");  scanf("%d", &x1);
    printf("整数 2 : ");  scanf("%d", &x2);

    if (x1 != x2)
    {
        puts("それらの値は違います。");
    }else{
        puts("それらの値は同じです。");
    }
    
    return 0;

}