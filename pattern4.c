#include<stdio.h>
void main()
{
	int i,j;
	printf("\n\n");
	for(i='a';i<='e';i++)
	{
		for(j=i;j<='e';j++)
		{
			printf("%c",i);//printf("*");
		}
		printf("\n\n");
	}
}
