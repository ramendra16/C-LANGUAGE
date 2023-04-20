#include<stdio.h>
int main()
{
	int var1=60;
	int var2=70;
	int *const ptr=&var1;
	printf("\n%d",*ptr);
	//ptr=&var2; //invalid erroe will rise
	//printf("%d\n",ptr);
	return 0;
}
