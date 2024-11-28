//To convert 31558150 seconds to days,hours,minutes
#include<stdio.h>;
int main(){
	float days,hours,minutes;
	int sec;
	sec=31558150;
	minutes=sec/60;
	hours=minutes/60;
	days=hours/24;
	printf("Earth takes a period of revolution of %f minutes %f hours and %f days",minutes,hours,days);
	return 0;
}
