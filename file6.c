#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("fseek.txt","w+");
	fputs("This is a pen",fp);
	fseek(fp,8,SEEK_SET);
	fputs("Welcome to Ssi Digital Indore",fp);
	//fseek(fp,9,SEEK_SET);
	//fputs("Welcome to Ssi Digital Indore",fp);
	fclose(fp);
	getch();
}
