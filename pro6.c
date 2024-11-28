//To swap two variables without using third variable
#include<stdio.h>
int main(){
	int a,b;
	printf("enter values of two numbers");
	scanf("%d%d",&a,&b);
	printf("before swaping values of a and b:%d %d",a,b);
	a=a+b;           //it adds value of a and b and stores the resylt in a
	
	b=a-b;           /*new value of b is obtained by subtracting original b from 
	                   new a(that is a+b). through this process b stores a's value*/
	                   
	a=a-b;          /* new value of a is obtained by subtracting new b(which
	                   actually stores a's value) from a defined earlier(that is a+b)*/
	                   
	printf("\nafter swaping values of a and b:%d %d",a,b);
	return 0;
	
}
