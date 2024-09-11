//read a number and print its factors
#include<stdio.h>
int main(){
	int num,i;
	printf("enter number whose factors are to be printed");
	scanf("%d",&num);
	printf("factors of enteed number are");
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("\n%d",i);
		}
		else{
			continue;
		}
	}
	return 0;
}
