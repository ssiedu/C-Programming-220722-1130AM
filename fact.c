#include<stdio.h>
void main()
{
	int num,i,fact=1;
	printf("\n Enter Number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("factorial of a number : %d",fact);
	getch();
}
