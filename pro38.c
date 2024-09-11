//to print squares of number
#include<stdio.h>
int main(){
	int n,i;
	printf("enter number upto which squares are to be printed");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",i*i);
		printf(" ");
	}
	return 0;
}
