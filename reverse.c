#include<stdio.h>
void main()
{
	int num,rev=0,sum=0,tod=0,temp;
	printf("\n Enter Number : ");
	scanf("%d",&num);
	temp=num;
	while(num != 0)//12//1
	{
		rev = rev*10 + (num%10); 
		sum = sum + (num%10);
		tod = tod+1;
		num = num/10;
	}
	printf("\n reverse number is : %d",rev);
	printf("\n sum of number is : %d",sum);
	printf("\n total number of digit: %d",tod);
	if(temp==rev)
	printf("\n Number is pallindrom");
	else
	printf("\n Number is not pallindrom");
	getch();
}
