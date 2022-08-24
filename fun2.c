#include<stdio.h>
void addition();
void main()
{
	int i;
	for(i=1;i<=3;i++)
	{
		addition();
	}
	
	
	getch();
}
void addition()
{
	int a,b;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	printf("\n addition of two val;ue : %d",a+b);
}
