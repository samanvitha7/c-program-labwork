//calculate electricity bill
#include<stdio.h>
int main(){
	float units,charge;
	printf("enter the units consumed");
	scanf("%f",&units);
	if(0<=units<=200)
	{
		charge=0.5*units;
	}
	else if(200<units<=400)
	{
		charge=100+(units-200)*0.65;
	}
	else if(400<units<=600)
	{
		charge=230+(units-400)*0.8;
	}
	else
	{
		charge=425+(units-600)*1.25;
	}
	printf("amount to be paid:%f",charge);
	return 0;
}
