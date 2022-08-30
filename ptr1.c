#include<stdio.h>
void main()
{
	int num=50;
	int *ptr=&num;
	printf("\n value of num : %d",num);//50
	printf("\n address of number : %x",&num);
	printf("\n address in ptr : %x",ptr);
	printf("\n address of ptr : %x",&ptr);
	printf("\n value of ptr : %d",*ptr);
	getch();
}
