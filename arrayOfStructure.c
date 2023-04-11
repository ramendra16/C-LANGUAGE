#include<stdio.h>
struct car
{
	char name[50];
	int seats;
	float price;
}myCar[3];
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter data for name, seats and price respectively:\n");
		printf("Enter data for car[%d]:",i);
		scanf("%s%d%f",&myCar[i].name,&myCar[i].seats,&myCar[i].price);	
	}
for(i=0;i<3;i++)
{
	printf("\nData about your car[%d] is: %s %d %f",i,myCar[i].name,myCar[i].seats,myCar[i].price);
	}	
	return 0;
}
