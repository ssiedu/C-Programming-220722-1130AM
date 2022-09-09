#include<stdio.h>
void main()
{
	FILE *fp;
	char text[30];
	fp=fopen("fputs.txt","w");
	fputs("welcome to c/c++  classes ",fp);
	fclose(fp);
	fp=fopen("fputs.txt","r");
	printf("%s",fgets(text,30,fp));
	fclose(fp);
	getch();
}
