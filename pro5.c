//program5 swap two variables using third variable
#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter values of two variables:");
	scanf("%d %d",&a,&b);

	c=a;
	a=b;
	b=c;

	printf("final value first variable :%d",a);
	printf("final value of second variable:%d ",b);
	
}
