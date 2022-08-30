#include<stdio.h>
void main()
{
	int num=30;
	int num1 = 50;
	int *ptr = &num;
	int *ptr1 = &num1;
	printf("\n address of ptr : %u",ptr);
	printf("\n address of ptr1 : %u",ptr1);
	ptr=ptr-ptr1;//new address = (address1 - address2)/sizeof(datatype)
	printf("\n maddress of ptr : %u",ptr);
	printf("\n address of ptr1 : %u",ptr1);
	getch();
}
