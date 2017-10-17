
#include <stdio.h>

int main(int argc, char **argv)
{
	int kubun,ninzu,goukei;
	
	printf("区分入力してください(1：子供 /  2：大人) : ");
	scanf("%d", &kubun);
	
	printf("人数を入力してください。: ");
	scanf("%d", &ninzu);
	
	if (kubun == 1)
	{
		goukei = ninzu * 800;
	}
	else
	{
		goukei = ninzu + 1500;
	}
	
	printf("合計金額= %d                           \n",goukei);
	
	return 0;
}
