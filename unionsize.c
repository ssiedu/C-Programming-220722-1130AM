#include<stdio.h>
union employee
{
	int id;
	char name[10];
	float sal;
}emp;
void main()
{
	printf("Union size : %d",sizeof(emp));
	getch();
}
