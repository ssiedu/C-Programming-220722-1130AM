#include<stdio.h>
void main()
{
	int i,n,s;
	printf("\n Enter Start limit of loop : ");
	scanf("%d",&s);
	printf("\n Enter End Limit of loop : ");
	scanf("%d",&n);
	printf("\n Natural Number :\n\n ");
	for(i=s;i<=n;i++)
	{
		printf("\t%d",i);
	}
	getch();
}
