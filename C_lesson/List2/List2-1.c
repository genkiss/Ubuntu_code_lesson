/*
    読み込んだ２つの整数値の和・差・積・商・余剰を表示
*/

#include <stdio.h>

int main(void)
{
    int vx, vy;

    puts("２つの整数を入力してください。");
    printf("整数vx:");    scanf("%d", &vx);
    printf("整数vy:");    scanf("%d", &vy);

    printf("vx + vy = %d\n", vx + vy);
    printf("vx - vy = %d\n", vx - vy);
    printf("vx * vy = %d\n", vx * vy);
    printf("vx / vy = %d\n", vx / vy);
    printf("vx %% vy = %d\n", vx % vy);

    return (0);
}