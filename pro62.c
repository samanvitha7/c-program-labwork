//reverse an array
#include<stdio.h>
int main(){
	int n,i;
	printf("enter size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("entered array is");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		a[i]=a[n-i];
	}
	printf("reverse of entered array is");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
	
}
