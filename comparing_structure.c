#include<stdio.h>
struct student
{
	char name[50];
	int roll, age;
	float marks;
}s,s1;
int main()
{
printf("Enter information of first student:\n");
printf("Enter name: ");
scanf("%s",s.name);
printf("Enter roll number: ");
scanf("%d",&s.roll);
printf("Enter marks: ");
scanf("%f",&s.marks);
printf("Enter age: ");
scanf("%d", &s.age);

printf("Enter information of second student:\n");
printf("Enter name: ");
scanf("%s",s1.name);
printf("Enter roll number: ");
scanf("%d",&s1.roll);
printf("Enter marks: ");
scanf("%f",&s1.marks);
printf("Enter age: ");
scanf("%d", &s1.age);

if(s.age>s1.age)
{
	printf("Age of student1 is greater than student 2");
}
else
{
	printf("Age of student2 is greater than student 1");
}
return 0;
}
