#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n1,n2,*ptr,i;
	printf("\n Enter array size : ");
	scanf("%d",&n1);
	ptr=(int*)malloc(n1*sizeof(int));
	printf("\n memory allocated by malloc : ");
	for(i=0;i<n1;i++)
	{
		printf("\n%x",(ptr+i));
	}
	printf("\n Enter array new size : ");
	scanf("%d",&n2);
	ptr = realloc(ptr,n2*sizeof(int));
	printf("\n newly allocated memory :\n");
	for(i=0;i<n2;i++)
	{
		printf("\n %x",(ptr+i));
	}
	free(ptr);
	getch();
}
