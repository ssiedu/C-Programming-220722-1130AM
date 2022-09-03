#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];
	char str2[20];
	printf("\n Enter First string : ");
	gets(str1);
	printf("\n Enter second string : ");
	gets(str2);
	
	if(strcmp(str1,str2)==0)
	printf("\n Strings are equal ");
	else
	printf("\n strings are not equal");
	getch();
}
