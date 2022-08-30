#include<stdio.h>
void main()
{
	int num=30;
	int *ptr = &num;
	printf("\n address of ptr : %u",ptr);
	//ptr++;//ptr= ptr+1;
	//new_address = current_address + i*(sizeof(datatype))
	ptr--;
	printf("\n maddress of ptr : %u",ptr);
	getch();
}
