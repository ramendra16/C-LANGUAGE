//wap to read and sisplay n number of records using array of unions
#include<stdio.h>
union employee
{
	char name[30];
	int id;
	float salary;
}u[100];
int main()
{
	int n,i;
	printf("\n Enter value of n:");
	scanf("%d",&n);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		printf("\nEnter name:");
		fflush(stdin);
		gets(u[i].name);
		printf("\n Entered name is: %s",u[i].name);
		printf("\n Enter id:");
		fflush(stdin);
		scanf("%d",&u[i].id);
		printf("\nEntered id is: %d",u[i].id);
		printf("\nEnter salary:");
		fflush(stdin);
		scanf("%f",&u[i].salary);
		printf("\nEntered salary is:%.2f",u[i].salary);
	}
	return 0;
}
