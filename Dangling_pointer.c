#include<stdio.h>
int main()
{
int *ptr;
{
	int val=23;
	ptr=&val;
	printf("\n%d",*ptr); //23 printed
	printf("\n%u",ptr); //Address of val will printed
}
printf("\n%u",ptr); // Same address is printed, even val is destroyed, hence ptr is dangling pointer

ptr=NULL; //Solution
printf("\n%u",ptr); // Now ptr is not a dangling pointer [0 adress value is printed]
return 0;
}
