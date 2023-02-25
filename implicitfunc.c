#include<stdio.h>
int main()
{
	float average, total;
	int counter;
	
	printf("enter value of average in float: ");
	scanf("%f", &total);
	
	printf("enter value of counter in integer: ");
	scanf("%d", &counter);
	
	average= total/(float)counter;
	printf("average is: %f", average);
	return 0;
	
	
}
