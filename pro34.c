//print fibonacci series
#include<stdio.h>
int main(){
	int f1,f2,next,n,i=1;
	f1=0;
	f2=1;
	printf("enter number of terms in fibonacci series");
	scanf("%d",n);
	if(n==1)
	{
		printf("0");
		
	}
	else if(n==2)
	{
		printf("%d%d",f1,f2);
	}
	else
	{
		printf("%d",f1);
		printf("%d",f2);
		for(i=1;i<=n;i++)
		{
			next=f1+f2;
			printf("%d",next);
			f1=f2;
			f2=next;
		}
	}
	return 0;
}
