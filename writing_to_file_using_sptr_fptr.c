#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	char name[20], arr[50];
	printf("Enter the file name: ");
	scanf("%s", name);
	fp = fopen(name,"w");
	if(fp==NULL)
	{
		printf("File cant be opened");
	}
	else
	{
		printf("Enter data for your string");
		scanf("%s", arr);
		fputs(arr,fp);
	}
	fclose(fp);
}
