#include<stdio.h>
void main()
{
	char str1[20];
	printf("\n Enter string : ");
	fgets(str1,20,stdin);
	printf("\n string is : ");
	puts(str1);
	getch();
}
