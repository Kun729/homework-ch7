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
		printf("\n�`�@��%d�Ӧr��\n", count);
	}
	else
		printf("�ɮ׶}�ҥ���!!\n");
}