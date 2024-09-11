//to print even numbers
#include<stdio.h>
int main(){
	int n,i;
	printf("enter numbers upto which even numbers are to be printed");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
			printf(" ");
		}
		else
		{
			continue;
		}
	}
	return 0;
}
