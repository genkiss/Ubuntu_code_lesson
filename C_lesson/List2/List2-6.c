/*
    整数と浮動小数点
*/

#include <stdio.h>

int main(void)
{

    int nx;
    double dx;

    nx = 9.99;
    dx = 9.99;


    printf("int型変数nxの値 : %d\n", nx);            /* 9 */
    printf("       nx / 2 : %d\n", nx / 2);         /* 9/2 */

    printf("double型変数dxの値 : %f\n", dx);         /*9.99*/
    printf("          DX / 2 : %f\n", dx / 2);     /* 9.99 / 2 */

    return (0);

}