//to print sum of digits of n digit number
#include<stdio.h>
int main(){
	int num,sum=0,r;
	printf("enter a number");
	scanf("%d",&num);
	while(num!=0)
	{
		r=num%10;
		sum=sum+r;
		num=num/10;
	}
	printf("sum of digits:%d",sum);
	return 0;
}
