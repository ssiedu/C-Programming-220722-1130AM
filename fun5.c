//function with argument and with return value
#include<stdio.h>
float product(float a, float b);//function declaration
void main()
{
	float a,b,p;//actual argument 
	printf("\n Enter the value of x : ");
	scanf("%f",&a);
	printf("\n Enter the value of y : ");
	scanf("%f",&b);
	p=product(a,b);
	printf("\n product of two numbers : %.2f",p);
	getch();
}
float product(float a, float b)
{
	return a*b;
}

