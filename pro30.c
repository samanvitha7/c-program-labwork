//to reverse number
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
	printf("reverse of entered number:%d",rev);
	
	return 0;
}
