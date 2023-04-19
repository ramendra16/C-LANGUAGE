#include<stdio.h>
void function();
int main()
{
	int a=1,b=2;
	printf("\n a is: %d, b is: %d",a,b);
	function();
	return 0;
}
void function()
{
	int c=3;
	printf("\n Value of c is: %d",c);
}
