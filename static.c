#include<stdio.h>
void increment();
void main()
{
	increment();
	increment();
	increment();
	getch();
}
void increment()
{
	static int x;//0//1//2
	printf("\n value of x : %d",x);//0//1//2
	x++;//1
}
