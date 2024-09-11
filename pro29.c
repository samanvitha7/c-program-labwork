//number is pallindrome or not
#include<stdio.h>
int main(){
	int num,rev,temp;
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rev=rev*10;
		rev=rev+num%10;
		num=num/10;
	
	}
	if(rev==temp)
	{
		printf("number is pallindrome");
	}
	else
	{
		printf("number is not pallindrome");
	}
	return 0;
}
