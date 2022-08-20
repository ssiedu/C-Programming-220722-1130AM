#include<stdio.h>
void main()
{
	int a=10,b=24,c=12;
	
	printf("\n Logical AND  : - %d " ,(a>b)&&(a>c));//F&&F  // F
	printf("\n Logical OR   : - %d ",(a<b)||(c>b));//T||F // T
	printf("\n Logical NOT  : - %d",!(a>b)&&(b>c));// !F&&T // T&&T // T
	printf("\n Logical ORNOT: - %d",(b>c)|| !(a>b));// T || !F // T
}
