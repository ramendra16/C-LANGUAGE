#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fptr;
	int i,n;
	fptr=fopen("putww.txt","w");
	for(i=1;i<=10;i++){
		printf("Enter number: ");
		scanf("%d",&n);
		putw(n,fptr);
	}
	fclose(fptr);
	}
