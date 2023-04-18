#include<stdio.h>
int cubeByValue(int n);
int main(void)
{
	int number =5;
	printf("The original value of number is %d", number);
	
	cubeByValue(number);
	printf("\n New value of number is \%d", number);
}
int cubeByValue(int n)
{
	return n*n*n;
}
