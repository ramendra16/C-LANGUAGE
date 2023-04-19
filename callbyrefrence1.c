#include<stdio.h>
int cubeByValue(int *n);
int main(void)
{
	int number =5;
	printf("The original value of number is %d", number);
	
	cubeByRef( &number );
	printf("\n New value of number is %d", number);
}
void cubeByRef(int *n)
{
	*n= *n * *n * *n;
}
