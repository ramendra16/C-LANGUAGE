#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fptr;
	char c;
	fptr=fopen("a.txt","w");
	printf("Enter the line of text, press ^z to stop\n");
	while((c=getchar())!=EOF)
	{
		putc(c,fptr);
	}
	fclose(fptr);
	}
