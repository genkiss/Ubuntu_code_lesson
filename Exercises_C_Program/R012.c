
#include <stdio.h>

int main(int argc, char **argv)
{
	int tanka,suryo,kingaku,zeikomi;
	
	printf("単価を入力してください : ");
	scanf("%d", &tanka);
	
	printf("何個ですか？ : ");
	scanf("%d", &suryo);
	
	kingaku = tanka * suryo;
	zeikomi = kingaku * 105 /100;
		
	printf("税抜き=%d 税込み=%d\n" , kingaku, zeikomi);
	
	
	return 0;
}
