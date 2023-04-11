//wap to ask the user to inter the record of one student using structure
#include<stdio.h>
struct student{
	char *name;
	int roll_number;
	float CGPA;
} StudentData;
int main()
{
printf("\nEnter name");
scanf("%s",&StudentData.name);

printf("\nEnter roll number");
scanf("%d",&StudentData.roll_number);

printf("\nEnter CGPA");
scanf("%f",&StudentData.CGPA);

printf("%s %d %f \n", StudentData.name, StudentData.roll_number, StudentData.CGPA);
return 0;
}
