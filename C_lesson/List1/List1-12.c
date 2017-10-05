/*
 * 読み込んだ2つの整数の和を求め表示
 */

#include <stdio.h>

int main(void)
{

  int n1, n2;
  int wa;     /*和*/

  puts("2つの整数を入力してください。");
  printf("整数1:"); scanf("%d", &n1);
  printf("整数2:"); scanf("%d", &n2);

  wa = n1 + n2;

  printf("それらの和は%dです。\n", wa);

  return (0);

}

