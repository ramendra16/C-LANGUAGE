#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fptr;
	int i,n;
	fptr=fopen("putww.txt","r");

		printf("the numbers are: ");
		for(i=1;i<=10;i++)
		{
			n=getw(fptr);
			printf("%d",n);
		}
	fclose(fptr);
	}
