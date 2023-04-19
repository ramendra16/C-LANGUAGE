//wap to start the loop from 1 to 100 and ask the user upto which num the user wants to print the value using break statement
#include<stdio.h>
int main()
{
	int i,j;
	printf("enter your num: ");
	scanf("%d", &j);
	
	for (i=1; i<=100; i++)
	{printf("%d\n", i);
	if(i==j)
	{break;
	}
	}
	return 0;
}
