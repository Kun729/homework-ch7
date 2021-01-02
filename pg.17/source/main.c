#include<stdio.h>
#include<stdlib.h>
#define Max 80

int main()
{
	FILE *f;
	char str[Max];
	int bytes;

	f = fopen("D:\output.txt", "r");
	while (!feof(f))
	{
		bytes = fread(str, sizeof(char), Max - 1, f);
		str[bytes] = '\0';
		printf("%s\n", str);
	}
	fclose(f);
}