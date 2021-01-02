#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *f;
	char c;
	int count = 0;

	f = fopen("D:\welcome.txt", "r");
	if (f != NULL)
	{
		while ((c = getc(f)) != EOF)
		{
			printf("%c", c);
			count++;
		}
		fclose(f);
		printf("\n總共有%d個字元\n", count);
	}
	else
		printf("檔案開啟失敗!!\n");
}