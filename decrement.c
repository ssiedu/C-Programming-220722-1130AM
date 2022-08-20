#include<stdio.h>
void main()
{
	int x=2;
	int y;
	y=--x;  // decrement operator
	y = x--; // post decrement
	printf("\n value of x : %d",x);
	printf("\n value of y : %d",y);
	getch();
}
