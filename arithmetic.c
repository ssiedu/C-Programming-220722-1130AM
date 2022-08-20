#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	
	printf("\n Addition is       : %d",a+b);
	printf("\n Subtraction is    : %d",a-b);
	printf("\n Multiplication is : %d",a*b);
	printf("\n Division is       : %.2f",(float)a/b);
	printf("\n Modulus is        : %d",a%b);
	
	getch();
	
	
}
