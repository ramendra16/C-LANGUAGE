#include<stdio.h>
int main(){
	int x= 3,y,z;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	y=x++;
	z=++x;
	printf("\n%d,%d,%d",x,y,z);
	return 0;	
}

