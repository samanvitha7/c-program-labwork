//check if num is prime or composite
#include<stdio.h>
int main(){
	int num,i,temp=0;
	printf("enter the number");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			temp=temp+1;
		}
		
	}
	if(temp==1)
	{
		printf("number is  prime");
	}
	else
	{
		printf(" composite");
	}
	return 0;
}
