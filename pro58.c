//to read wo arrays of 10 integers and add them
#include<stdio.h>
int main(){
	int a1[5],a2[5],sum[5],i;
	printf("enter elements of first array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("enter elements of second array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a2[i]);
	}
	for(i=1;i<5;i++)
	{
		sum[i]=a1[i]+a2[i];
	}
	printf("adddition of two arrays is as follows");
	for(i=0;i<5;i++)
	{
		printf("%d\n",sum[i]);
	}
	return 0;
	
	
}
