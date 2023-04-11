#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the num to print the table: ");
	scanf("%d", &n);
	
	print("enter the value of multiplicative number: ");
	scanf("%d", &i);
	
	
	while(i<=10)
	{
		printf("%d * %d = %d\n", n,i,(n*i));
		i++;
	}
	return 0;
}

