#include<stdio.h>
void main()
{
	FILE *fp;
	char buff[30];
	fp=fopen("fprintf.txt","r");
	while((fscanf(fp,"%s",buff)!=EOF))
	{
		printf("%s",buff);
	}
	fclose(fp);
}
