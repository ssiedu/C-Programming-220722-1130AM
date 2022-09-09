#include<stdio.h>
void main()
{
	FILE *fp;
	int len;
	fp=fopen("fprintf.txt","r");
	fseek(fp,0,SEEK_END);
	len=ftell(fp);
	fclose(fp);
	printf("\n size of file %d in bytes ",len);
	getch();
}
