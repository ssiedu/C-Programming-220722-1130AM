#include<stdio.h>
int add();
void main()
{
	int res;
	int (*ptr)();
	ptr= &add;
	res = (ptr)();//add()
	printf("\n result : %d",res);
	getch();
}
int add()
{
	int x=10,y=20;
	return x+y; 
}
