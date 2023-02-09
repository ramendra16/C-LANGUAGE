//write a program to print the details of a student like name, registration num, roll num, city, state,contact num, and cgpa using variable
#include <stdio.h>
#include <conio.h>
int main()
{
char name[21]= "Ramendra";
double regi_num = 12220278;
int roll_num= 65;
char city[10]="lucknow";
char state[100]="uttar pradesh";
double cont_num= 7985354127;
float cgpa= 5.0;

printf("Name=%s \n", name);
printf("regi_num=%lf \n", regi_num);
printf("roll_num=%i \n", roll_num);
printf("city=%s \n", city);
printf("State=%s \n", state);
printf("contact_num=%lf \n", cont_num);
printf("CGPA=%f \n", cgpa);
return 0;	
}
