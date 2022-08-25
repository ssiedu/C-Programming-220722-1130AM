//function with argument and without return value
#include<stdio.h>
void addition(int a, int b,int c);
void main()
{
	int x,y,z;
	printf("\n Enter first Number : ");
	scanf("%d",&x);
	printf("\n Enter Second Number : ");
	scanf("%d",&y);
	printf("\n Enter Third Number : ");
	scanf("%d",&z);
	addition(x,y,z);//adition(z,x,y)
	getch();
}
void addition(int a, int b, int c)
{
	printf("\n sum is : %d",a+b+c);
}
