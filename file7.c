#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("fputs.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	printf("\n\n");
	rewind(fp);
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}
