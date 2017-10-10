/*
  ２つの関数を持つプログラム
*/

#include <stdio.h>

void func1(void);   /*func1()のプロトタイプ*/

int main(void)
{
    printf("私は");
    func1();
    printf("好きです。");

    return (0);

}

void func1(void)
{
    printf("C言語が");
}

