//sort an array by selection sort
#include<stdio.h>
int main(){
	int n,i,j,temp;
	printf("enter size of array");
	scanf("%d",&n);
	int a1[n];
	printf("enter elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a1[i]);
	}
	for(i=0;i<n;i++)
	
	{
		for(j=0;j<n;j++)
		{
			if (a1[j]>a1[j+1])
		 {
			temp=a1[j];
			a1[j]=a1[j+1];
			a1[j+1]=temp;
		 }
		}
		
	}
	printf("array after selection sort");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a1[i]);
	}
	
	return 0;
}
