#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	int age;
	char name[20];
	float salary;
}e1,e2;
void main()
{
	//struct employee e1,e2;
	e1.id = 101;
	e1.age=30;
	strcpy(e1.name,"Ram");
	e1.salary=45000.45;
	
	e2.id = 102;
	e2.age=35;
	strcpy(e2.name,"shyam");
	e2.salary=85000.45;
	
	printf("\n Employee Id     : %d",e1.id);
	printf("\n Employee Age    : %d",e1.age);
	printf("\n Employee Name   : %s",e1.name);
	printf("\n Employee Salary : %.2f",e1.salary);
	
	printf("\n Employee Id     : %d",e2.id);
	printf("\n Employee Age    : %d",e2.age);
	printf("\n Employee Name   : %s",e2.name);
	printf("\n Employee Salary : %.2f",e2.salary);
	getch();
}
