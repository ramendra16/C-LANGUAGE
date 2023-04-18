#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	int *aPtr;
	a=7;
	aPtr=&a;
	printf("The address of a is %p"
	"\nThe value of aPtr is %p",&a, aPtr);
	
	printf("\nThe value of a is %d"
	"\nThe value of *aPtr is %d",a, *aPtr);
	
	printf("\nShowing that * and & are complements of each other \n&*aPtr=%p \n*&aPtr = %p\n", &*aPtr, *&aPtr);
	return 0;
}
