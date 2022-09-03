#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int len;
	printf("\n Enter String : ");
	gets(str);
	len=strlen(str);
	printf("\n length of string : %d",len);
	getch();
}
