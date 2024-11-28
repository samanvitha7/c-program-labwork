//to reaad time in total seconds and convert it into time
#include<stdio.h>;
int main(){
	float sec,min,hour;
	printf("enter time in seconds");
	scanf("%f",&sec);
	min=sec/60;
	hour=min/60;
	printf("time in hours is %f" ,hour);
	printf("time in min is %f" ,min);
	return 0;
}
