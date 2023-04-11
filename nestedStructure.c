#include<stdio.h>
struct Address
{
	char housename[25];
	char city[25];
	char streetname[25];
};

struct Employee
{
	int id;
	char name[25];
	float salary;
	
		struct Address add;
}E;
int main()
{
	printf("\n Enter employee id: ");
	scanf("%d",&E.id);
	printf("\n Enter employee name: ");
	scanf("%s",&E.name);
	printf("\n Enter employee salary: ");
	scanf("%f",&E.salary);
	
	printf("\n Enter employee housename: ");
	scanf("%s",&E.add.housename);
	printf("\n Enter employee city: ");
	scanf("%s",&E.add.city);
	printf("\n Enter employee streetname: ");
	scanf("%s",&E.add.streetname);
	
	printf("\Details of employees");
	printf("\n employee id: %d",E.id);
	printf("\n employee id: %s",E.name);
	printf("\n employee id: %f",E.salary);
	
	printf("\n employee id: %s",E.add.housename);
	printf("\n employee id: %s",E.add.city);
	printf("\n employee id: %s",E.add.streetname);
	return 0;
	
}


