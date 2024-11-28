//program to return 1 if entered num is prime
#include<stdio.h>
int prime(int num);
int main(){
	int num;
	printf("enter the number");
	scanf("%d",&num);
	prime(num);
}
int prime(int num)
{
    int i,temp=0;
	for( i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			temp=temp+1;
		}
		
	}
	if(temp==1)
	{
		printf("number is  prime");
		printf("\n1");
	}
	else
	{
		printf(" not prime");
		printf("\n0");
	}
	return 0;
}
