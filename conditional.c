#include<stdio.h>
void main()
{
	int a,b,max;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	max = (a>b) ? a :b;
	printf("\n largest number is : %d",max);
	getch();
	
}
