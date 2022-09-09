#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("fputc.txt","w");
	fputc('Z',fp);
	fclose(fp);
	fp=fopen("fputc.txt","r");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}
