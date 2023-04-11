#include<stdio.h>
struct car{
	char *name;
	int seats;
	float price;
} myCar;
int main()
{
myCar.name="XUV";
myCar.price=200000;
myCar.seats=4;
printf("%s %f %d \n", myCar.name, myCar.price, myCar.seats);
}
