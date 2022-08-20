#include<stdio.h>
void main()
{
	int x=1;
	int y;
	//y=++x;
	y = x++;
	printf("\n value of x : %d",x);
	printf("\n value of y : %d",y);
	getch();
}
