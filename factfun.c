#include<stdio.h>
int facto(int n);
void main()
{
	int num,res;
	printf("\n Enter Number : ");
	scanf("%d",&num);
	res=facto(num);
	printf("\n factorial is : %d",res);
	getch();
}
int facto(int n)
{
	int fact=1,i;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
