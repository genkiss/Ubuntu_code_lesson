/*問題がある場所は？*/
#include <stdio.h>

int f1(void);

int main(void)
{
    /*double answer;*/
    int answer;

    answer = f1();
    /*printf("%f", answer);*/
    printf("%d", answer);

    return 0;
}

int f1(void)
{
    return 100;
}