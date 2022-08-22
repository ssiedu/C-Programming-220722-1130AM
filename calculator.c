#include<stdio.h>
void main()
{
	char ch;
	int fNum,sNum;
	printf("\n Enter any operator (+,-,*,/) : ");
	scanf("%c",&ch);
	printf("\n Enter first Number : ");
	scanf("%d",&fNum);
	printf("\n Enter Second Number : ");
	scanf("%d",&sNum);
	
	switch(ch)
	{
		case '+':
			printf("\n %d + %d = %d",fNum,sNum,fNum+sNum);
			break;
		
		case '-':
			printf("\n %d - %d = %d ",fNum,sNum,fNum-sNum);
			break;
			
		case '*':
			printf("\n %d * %d = %d",fNum,sNum,fNum*sNum);
			break;
			
		case '/':
			printf("\n %d / %d = %d",fNum,sNum,fNum/sNum);
			break;
			
		default: 
			printf("\n please enter valid operator");
	}
	getch();
}
