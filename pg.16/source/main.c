#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define Enter 13
#define Max 80

int main()
{
	FILE *f;
	char str[Max], ch;
	int i = 0;
	f = fopen("D:\output.txt", "a");
	printf("請輸入字串，按ENTER鍵結束輸入:\n");
	while ((ch = getche()) != Enter && i < Max)
	{
		str[i++] = ch;
	}
	putc('\n', f);
	fwrite(str, sizeof(char), i, f);
	fclose(f);
	printf("\n檔案附加完成!!\n");
}