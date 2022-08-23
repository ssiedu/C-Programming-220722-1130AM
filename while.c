#include<stdio.h>
void main()
{
	int i,n;
	printf("\n Enter Limit : ");
	scanf("%d",&n);
	i=2;
	while(i<=n)
	{
		printf("\n %d",i);
		i=i+2;
	}
	getch();
	
}
