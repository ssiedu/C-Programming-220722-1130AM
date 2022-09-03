#include<stdio.h>
#include<string.h>
void main()
{
	char str1[40] = "This is ssi in ssidigital";
	char *str;
	str = strstr(str1,"ssi");
	printf("\n sub string in str1 : %s",str);
	getch();
}
