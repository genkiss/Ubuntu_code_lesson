/*
 * resson.c
 * 
 * Copyright 2017 genki <genki@genki-ubuntu>
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int kokugo,shakai,rika;
	int goukei,average;
	
	printf("国語の点数を入力してください : "); scanf("%d", &kokugo);
	printf("社会の点数を入力してください : "); scanf("%d", &shakai);
	printf("理科の点数を入力してください : "); scanf("%d", &rika);
	
	goukei = kokugo + shakai + rika;
	average = goukei / 3;
	
	printf("合計＝%d 平均=%d",goukei,average);
	
	return 0;
}

