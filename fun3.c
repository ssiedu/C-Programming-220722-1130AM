//function without argument and with return value
#include<stdio.h>
int addition();
void main()
{
	int res;
	res=addition();
	printf("\n sum is : %d",res);
	getch();
}
int addition()
{
	int num1,num2,sum;
	printf("\n Enter first number : ");
	scanf("%d",&num1);
	printf("\n Enter Second Number : ");
	scanf("%d",&num2);
	sum=num1+num2;
	return sum;
}
