#include<stdio.h>
void main()
{
	int a[20];
	int n,i,sum=0;
	printf("\n Enter Array size : ");
	scanf("%d",&n);
	printf("\n Enter Array Elements : \n");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]  : ",i);
		scanf("%d",&a[i]); 
	}
	for(i=0;i<n;i++)
	{
		sum = sum+a[i];
	}
	printf("\n sum of array elements : %d",sum);
	getch();
	
	
}
