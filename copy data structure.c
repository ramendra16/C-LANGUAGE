#include<stdio.h>
struct student
{
	char name[50];
	int roll;
	float marks;
}s,s1;
int main()
{
printf("Enter information:\n");
printf("Enter name: ");
scanf("%s",s.name);
printf("Enter roll number: ");
scanf("%d",s.roll);
printf("Enter marks: ");
scanf("%f",s.marks);
s1=s;
printf("Displaying information:\n");
prontf("name: ");
puts(s1.name);
printf("Roll number: %d\n",s1.roll);
printf("Marks: %.1f\n",s1.marks);
return 0;
}
