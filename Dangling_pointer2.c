#include<stdio.h>
#include<stdlib.h>
int main()
{
 int n=1;
 int *ptr=(int*)malloc(n*sizeof(int));
 *ptr=6;
 printf("%d",*ptr); //6 is printed
  printf("\n%d",ptr); // Printing address hold by pointer before deallocating
  free(ptr);
  printf("\n%d",ptr); //same address will be printed
  ptr=NULL; //pointer is not changed to null
  printf("\n%d",ptr); //0 will printed
  return 0;
}


