//read numbers till a negative number is entered and calculate sum till then
#include<stdio.h>
int main(){
	int num,sum;
	printf("enter numbers(enter negative number to stop)");
	scanf("%d",&num);
	while(num>=0)
	{
		sum=sum+num;
		printf("enter another number");
		scanf("%d",&num);
	}
	printf("sum of numbers:%d",sum);
}
