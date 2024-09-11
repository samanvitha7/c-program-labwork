//read a number n and print sum in single digit
#include<stdio.h>
int main(){
	int num,sum=0,r;
	printf("enter a number");
	scanf("%d",&num);
	while(num/10!=0)
	{
		sum=0;
		while(num!=0)
		{
		r=num%10;
		sum=sum+r;
		num=num/10;
	       }
	       num=sum;
	}
	printf("%d",sum);
	return 0;
}
