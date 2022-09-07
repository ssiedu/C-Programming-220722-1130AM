#include<stdio.h>
#include<string.h>
union employee
{
	int id;
	char name[10];
	float sal;
}emp;
void main()
{
	emp.id=101;
	printf("\n Employee Id : %d",emp.id);
	strcpy(emp.name,"Ram");
	printf("\n Employee Name : %s",emp.name);
	emp.sal=45678;
	printf("\n Employee salary : %.2f",emp.sal);
	getch();
}
