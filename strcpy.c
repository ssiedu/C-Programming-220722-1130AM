#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];
	char str2[20];
	printf("\n Enter string :");
	gets(str1);
	strcpy(str2,str1);
	printf("\n string is : %s",str2);
	getch();
}
