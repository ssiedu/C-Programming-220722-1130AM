#include<stdio.h>
void main()
{
	int num=50;
	int *ptr = &num;
	int **pptr = &ptr;
	int ***ppptr = &pptr;
	int ****pppptr = &ppptr;
	
	printf("\n value of number : %d",num);
	printf("\n value of ptr    : %d",*ptr);
	printf("\n calue of pptr   : %d",**pptr);
	printf("\n value of ppptr  : %d",***ppptr);
	printf("\n value of pppptr : %d",****pppptr);
	
	printf("\n value of number : %x",&num);
	printf("\n value of ptr    : %x",&ptr);
	printf("\n calue of pptr   : %x",&pptr);
	printf("\n value of ppptr  : %x",&ppptr);
	printf("\n value of pppptr : %x",&pppptr);
	getch();
}
