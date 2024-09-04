//simple calculator using switch case
#include<stdio.h>
int main(){
	int n,a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	printf("enter 1 for addition,2 for subtraction,3 for multiplication,4 for division");
	scanf("%d",&n);
	switch(n)
	{
		case(1):printf("sum is %d",a+b);
		        break;
		case(2):printf("subtraction is %d",a-b);
		        break;
		case(3):printf("multiplication is %d",a*b);
		        break;
		case(4):printf("division is %d",a/b);
		        break;
		default:printf("invalid number");
		        break;
		  
		         
	}
}
