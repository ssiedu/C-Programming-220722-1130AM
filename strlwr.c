#include<stdio.h>
#include<string.h>
void main()
{
	char str[40];
	printf("\n Enter string : ");
	gets(str);
	printf("\n string lower case : %s",strlwr(str));
	getch();
}
