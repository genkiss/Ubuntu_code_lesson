/*
 *  演習1-5　入力された整数から10を減算
 */

#include <stdio.h>

int main(void)
{

  int no;

  printf("整数を入力してください:");
  scanf("%d", &no);

  printf("入力された数値から10を引くと%dです。", no - 10);

  return (0);

}

  
