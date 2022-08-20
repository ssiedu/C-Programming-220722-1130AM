#include<stdio.h>
void main()
{
	int num1,num2,result;
	printf("\n Enter the value of num1 and num2 : ");
	scanf("%d%d",&num1,&num2);
	//printf("\n Enter the value of num2 : ");
	//scanf("%d",&num2);
	result = num1 + num2;
	printf("\n sum is : %d + %d : %d",num1,num2,result);

	getch();
}
