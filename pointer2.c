#include<stdio.h>
int cubeByValue(int n);
int main(void)
{
	int number ;
	printf("enter your original num: ");
	scanf("%d", &number);
	printf("The original value of number is %d", number);
	
	cubeByValue(number);
	printf("\n New value of number is \%d", number);
}
int cubeByValue(int n)
{
	return n*n*n;
}
