#include<stdio.h>
void main()
{
	int a, b,temp;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("\n value of a : %d",a);
	printf("\n value of b : %d",b);
	getch();
}
