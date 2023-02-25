#include<stdio.h>
int main()
{
	int average, total;
	float counter;
	
	printf("enter value of total in int: ");
	scanf("%d", &total);
	
	printf("enter value of counter in float: ");
	scanf("%f", &counter);
	
	average= total/(int)counter;
	printf("average is: %d", average);
	return 0;
	
	
}
