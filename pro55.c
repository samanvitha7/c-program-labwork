//read an array of n numbers and count even and odd numbers
#include<stdio.h>
int main(){
	int a[10],i,even_c=0,odd_c=0;
	
	for(i=0;i<10;i++)
	{
		printf("enter elements of array");
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			even_c=even_c+1;
		}
		else
		{
			odd_c=odd_c+1;
		}
	}
	printf("number of odd numbers are %d",odd_c);
	printf("number of even numbers are %d",even_c);
	return 0;
}
