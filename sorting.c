#include<stdio.h>
void main()
{
	int a[20];
	int i,j,n,temp;
	printf("\n Enter array size : ");
	scanf("%d",&n);
	printf("\n Enter array Elements : \n\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n sorted array : \n\n");
	for(i=0;i<n;i++)
	{
		printf("\n  %d",a[i]);
	}
	getch();
}
