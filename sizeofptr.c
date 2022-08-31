#include<stdio.h>
void main()
{
	int *iptr;
	float *fptr;
	char *cptr;
	double *dptr;
	
	printf("\n integer pointer : %d",sizeof(iptr));
	printf("\n float pointer : %d",sizeof(fptr));
	printf(":\n char pointer : %d",sizeof(cptr));
	printf("\n double pointer : %d",sizeof(dptr));
	
	getch();
}
