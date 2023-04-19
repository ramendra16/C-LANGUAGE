#include<stdio.h>
int main()
{
int i,j;
for(i=1; i<5; i++)
{
	if(i==2)
	{ goto a; 
	}
	printf("%d\n", i);
}
a:
	printf("two\n");
	while(j<=10)
		{
		printf("2 * %d = %d\n",j,(2*j));
		j++;
	}
	
	
	return 0;



}
