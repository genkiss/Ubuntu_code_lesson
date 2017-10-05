/*
 *  演習 1-7 読み込んだ２つの整数の積を求めて表示
 */

#include <stdio.h>

int main(void)
{

  int n1, n2;
  int wa;

  puts("２つの整数を入力してください。");
  
  printf("整数1:"); scanf("%d", &n1);
  printf("整数2:"); scanf("%d", &n2);

  wa = n1 * n2;

  printf("２つの整数の積は%dです。", wa);

  return (0);

}

