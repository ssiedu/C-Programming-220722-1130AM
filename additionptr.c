#include<stdio.h>
void main()
{
	int num=30;
	int *ptr = &num;
	printf("\n address of ptr : %u",ptr);
	//ptr=ptr+3;
	ptr=ptr-5;
	printf("\n maddress of ptr : %u",ptr);
	getch();
}
