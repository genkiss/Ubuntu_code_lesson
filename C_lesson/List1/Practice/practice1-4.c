/*
 *  演習１-4　入力された整数に10を加算
 */

#include <stdio.h>

int main(void)
{

  int no;

  printf("整数を入力してください:");

  scanf("%d", &no);

  printf("その整数に10を加えると%dです。", no + 10);

  return (0);

}

