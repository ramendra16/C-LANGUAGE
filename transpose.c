#include<stdio.h>
int main()
{
	int a[10][10], transpose[10][10], r,c,i,j;
	printf("Enter rows and of Matrix\n");
	scanf("%d%d", &r,&c);
	printf("enter elements of matrix:\n");
	for (i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter element a%d%d:", i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered matrix\n");
	for (i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for (i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			transpose[i][j]=a[j][i]; 
		}
	}
	printf("\nTranspose of matrix:\n");
		for (i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ", transpose[i][j]);		
		}
		printf("\n");
	}
	return 0;
	
}
