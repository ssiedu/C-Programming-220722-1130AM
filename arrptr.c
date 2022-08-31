#include<stdio.h>
void main()
{
	int arr[5]= {1,2,3,4,5};
	int i;
	int *ptr = &arr;
	printf("\n array Elements : \n");
	for(i=0;i<5;i++)
	{
		printf("\n %d",*(ptr+i));
	}
	getch();
	 
}
