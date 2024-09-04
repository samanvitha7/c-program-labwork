//to read 3 no.s and print nax using conditional operator
#include<stdio.h>
int main(){
	int num1,num2,num3,max,temp;
	printf("enter 3 numbers");
	scanf("%d%d%d",&num1,&num2,&num3);
	temp=num1>num2?num1:num2;
	max=num3>temp?num3:temp;
	printf("maximum of 3 numbers is %d",max);
	return 0;
	
}
