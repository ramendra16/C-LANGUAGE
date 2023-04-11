#include<stdio.h>
struct car
{
	char name[50];
	float price;
	int seats;
	
}myCar={"Renault,50000,2"}, *myCarPtr;
int main()
{
	struct car myCar={"Renault",50000,2};
	struct car *myCarPtr;
	myCarPtr=&myCar;
	printf("%s %f %d \n%s %f %d \n%s %f %d",
	myCar.name, myCar.price, myCar.seats,
	myCarPtr->name, myCarPtr->price, myCarPtr->seats,
	(*myCarPtr).name,(*myCarPtr).price, (*myCarPtr).seats);
	return 0;
}
