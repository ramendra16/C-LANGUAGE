#include <stdio.h>
int main()
{
int array[100], position, c, n;
printf("Enter number of elements of array:\n");
scanf("%d",&n);
printf("Enter %d elements:\n",n);
for(c=0;c<n;c++)
{
	scanf("%d",&array[c]);
}
printf("Enter the location where you wish to delete an element:\n");
scanf("%d", &position);
for(c=position-1;c<n-1;c++)
{
	array[c]=array[c+1];
}
printf("The resultant array is:\n");
for(c=0;c<n-1;c++)
{
	printf("%d\n", array[c]);
}
return 0;
}
