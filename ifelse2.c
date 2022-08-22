#include<stdio.h>
void main()
{
	int num;
	printf("\n Enter Number : ");
	scanf("%d",&num);
	
	
	if(num%7==0 && num%5==0)
	printf("\n Number is divisible by both");
	else if(num%5==0)
	printf("\n number is divisible by 5");
	else if(num%7==0)
	printf("\n Number is divisible by 7");
	else
	printf("\n Number is not divisible by both");
	getch();
	
}
