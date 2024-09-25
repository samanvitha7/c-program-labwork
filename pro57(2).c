//to find max and small of entered numbers
#include<stdio.h>
int main(){
	int n,temp,a[n],i,j;
	printf("enter how many numbers you want to enter");
	scanf("%d",&n);
	for( i=0;i<n;i++)
	{
		printf("enter the number");
		scanf("%d",&a[i]);
	}
	printf("entered elements are");
	for( i=0;i<n;i++)
	{
	
		
		
		printf("%d\t",a[i]);
       }
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
	
		    if(a[j]>a[j+1])
		    {  
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		    }
	       } 
	}
	printf("numbers after arranging are as follows");
	for( i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("first maximum of entered elements is %d",a[n-1]);
	printf("smallest of elements entered is %d",a[0]);
	return 0;
}

