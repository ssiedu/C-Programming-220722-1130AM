#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	printf("\n Enter string : ");
	gets(str);
	printf("\n string upper case : %s",strupr(str));
	getch();
	
}
