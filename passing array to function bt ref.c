#include<stdio.h>
void reference(int[],int);
int main()
{
	int arr[100],n;
	int i;
	printf("\n Enter n:");
	scanf("%d", &n);
	printf("\n Enter array elements:");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Elements by reference:");
	reference(arr,n);
	return 0;
} 
	
	void reference(int x[], int size)
	{
		int i;
		for(i=0;i<size;i++)
		{
			printf("\n%d", x[i]);
		}
	}
