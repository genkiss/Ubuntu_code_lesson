/*
    演習 2-1 2つの整数を入力し 最初の整数が２つめの何％なのかを表示
*/

#include <stdio.h>

int main(void)
{
    int n1,n2;

    puts("整数を２つ入力");

    printf("整数A:"); scanf("%d", &n1);
    printf("整数B:"); scanf("%d", &n2);

    printf("整数Aは整数Bの%d％です。\n", (n1*100/n2));

    return (0);

}