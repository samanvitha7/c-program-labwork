//calculate power without using header file
#include<stdio.h>
int main(){
	int base,power,i=1,num=1;
	printf("enter the value of base number");
	scanf("%d",&base);
	printf("enter the value of power");
	scanf("%d",&power);
	while(i<=power){
		num=num*base;
		i++;
	}
	printf("the number raised to its power is:%d",num);
	
}
