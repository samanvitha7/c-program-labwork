//to read array of 10 integers and print sum of integers
#include<stdio.h>
int main(){
	int a[10],i,sum=0;
	
	for(i=0;i<10;i++)
	{
		printf("enter elements of array");
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of integers entered is %d",sum);
	return 0;
}
