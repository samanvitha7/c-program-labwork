//to print 1,3,5,7,9...n
#include<stdio.h>
int main(){
	int n,i;
	printf("enter numbers upto which odd numbers are to be printed");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
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
