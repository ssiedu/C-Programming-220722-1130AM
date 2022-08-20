#include<stdio.h>
void main()
{
	int a,b,c,max;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	printf("\n Enter the value of c : ");
	scanf("%d",&c);
	
	max =(a>b && a>c)? a : (b>c) ? b : c;
	
	printf("\n maximum value is : %d",max);
	getch();
}
