#include <stdio.h>
int main()
{
	int a[50];
	int i,loc=-1,key,n;
	printf("\n Enter value of n:");
	scanf("%d",&n);
	printf("\n Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter integer value to search in array:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			loc=i;
			break;
		}
		}	
		
	if(loc!=-1)
	{
		printf("The value is present at location %d", loc+1);
	}
	else
	{
		printf("Key value not found");
	}
	return 0;
}
