//to calculate commission of sales representative
#include<stdio.h>
int main(){
	float sales,coms,amt;
	printf("enter sales value");
	scanf("%f",&sales);
	printf("enter amount value");
	scanf("%f",&amt);
	
	if(sales<=500)
	{
		coms=amt*5/100;
	}
	else if(500<sales<=2000)
	{
		coms=35+(amt-500)*10/100;
	}
	else if(2000<sales<=5000)
	{
		coms=185+(amt-2000)*12/100;
	}
	else
	{
		coms=amt*12.5/100;
	}
	printf("commission :%f",coms);
}
