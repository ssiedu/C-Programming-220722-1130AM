#include<stdio.h>
void main()
{
	int a=30,b=30;
	printf("\n greater than           : %d",a>b);//1//0
	printf("\n less than              : %d",(a<b));//0//0
	printf("\n Greater than equal too : %d",(a>=b));//1//1
	printf("\n Less than equal too    : %d",(a<=b));//0//1
	printf("\n Equal too              : %d",(a==b));//0//1
	printf("\n Not Equal too          : %d",(a!=b));//1//0
	getch();
}
