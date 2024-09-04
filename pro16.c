//To read 3 no.s and print max
#include<stdio.h>
int main(){
	int num1,num2,num3,max;
	printf("enter 3 numbers");
	scanf("%d%d%d",&num1,&num2,&num3);
	max=num1;
	if(num1>num2){
		max=num1;
	}
	else{
		max=num2;
	}
	if(num3>max){
		max=num3;
	}
	printf("maximum of 3 numbers : %d",max);
	return 0;
}
