#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("fprintf.txt","w");
	fprintf(fp,"Welcome to ssi digital");
	fclose(fp);
	getch();
}
