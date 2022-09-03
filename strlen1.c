#include<stdio.h>
void main()
{
	char str[20];
	int i=0;
	
	printf("\n Enter string : ");
	gets(str);
	while(str[i]!='\0')
	{
		i++;	
	}
	printf("\n length of string :%d",i);
	getch();
}
