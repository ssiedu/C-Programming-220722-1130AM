#include<stdio.h>
void main()
{
	int i;
	float f;
	char c;
	int *iptr=NULL;
	float *fptr = NULL;
	char *cptr = NULL;
	
	iptr = &i;
	i=10;
	printf("\n value of i : %d",i);//10
	printf("\n value of iptr : %d",*iptr);//10//0
	
	fptr = &f;
	f=12.34;
	printf("\n value of f : %.2f",f);//12.34
	printf("\n value of fptr : %.2f",*fptr);//0//12.34
	
	cptr = &c;
	c='Z';
	printf("\n value of c : %c",c);//Z
	printf("\n value of cptr : %c",*cptr);//Z//0
	
	getch();
}
