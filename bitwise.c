#include<stdio.h>
void main()
{
	int x=40 , y=80;
	
	printf("\n Bitwise AND : %d",(x&y));
	printf("\n Bitwise OR  : %d", (x|y));
	printf("\n Bitwise NOT : %d", (~x));
	printf("\n Bitwise XOR : %d", (x^y));
	printf("\n Bitwise Left shift : %d", (x<<1));
	printf("\n Bitwise Right Shift: %d", (x>>1));
	getch();
	
}
