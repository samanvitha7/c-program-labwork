//conversion of temp from farenheit to centigrade
#include<stdio.h>
int main(){
	float temp_c,temp_f;
	printf("enter temperature in farenheit:");
	scanf("%f",&temp_f),
	temp_c=(temp_f-32)*5/9;
	printf("temperature after conversion : %f",temp_c);
}
