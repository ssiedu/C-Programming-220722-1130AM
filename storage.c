#include<stdio.h>
int a=20;
void main()
{
	//int a=12;
	{
		int a=25;
		printf("\n value of a in block : %d",a);//25
	}
	printf("\n value of a in main : %d",a);//12//25//
	getch();
}
