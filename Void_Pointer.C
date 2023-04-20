#include<stdio.h>
int main()
{
int x=10;
char ch = 'A';
float f=10.11;
void *gp;
gp=&x;
printf("\n Generic pointer points to the integer value =%d",*(int*)gp);
gp=&ch;
printf("\n Generic pointer now points to the char value =%c",*(char*)gp);
gp=&f;
printf("\n Generic pointer now points to the float value =%.2f",*(float*)gp);
return 0;
}
