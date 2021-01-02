#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *in, *out;

	int cnt;
	char str[100];
	in = fopen("D:\welcome.txt", "r");
	out = fopen("D:\output.txt","w");

	while (!feof(in))
	{
		cnt = fscanf(in, "%s", str);

		if (cnt > 0)
		{
			fprintf(out, "%s\n", str);
		}
	}
	fclose(in);
	fclose(out);
}