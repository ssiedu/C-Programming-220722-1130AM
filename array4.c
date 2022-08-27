#include<stdio.h>
void main()
{
	int a[20];
	int n,i;
	printf("\n how many elements do u want to Enter : ");
	scanf("%d",&n);
	printf("\n Enter Array Elements : \n");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]  : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n Array Elements are : \n");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d] = %d",i,a[i]);
	}
	getch();
}
