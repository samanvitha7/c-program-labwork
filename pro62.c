//reverse an array
#include<stdio.h>
int main(){
	int n,i,temp;
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
	
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	printf("reverse of entered array is");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	getch();
	return 0;
	
}

