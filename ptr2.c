#include<stdio.h>
void main()
{
	int a,b,sum;
	int *ptr1,*ptr2;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	ptr1 = &a;
	ptr2 = &b;
	sum= *ptr1 + *ptr2;
	printf("\n sum of two numbers : %d",sum);
	getch();
	
}
