#include<stdio.h>
int fact(int n);
void main()
{
	int num,res;
	printf("\n Enter Number : ");
	scanf("%d",&num);
	res=fact(num);
	printf("\n factorial is : %d",res);//120
	getch();
}
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);//5*fact(4)//5*4*fact(3)//5*4*3*fact(2)//5*4*3*2*1*0
}
