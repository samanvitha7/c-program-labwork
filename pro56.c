//to read 10 elements into an array and count number of positive,negative and zero elements
#include<stdio.h>
int main(){
	int a[10],i,pos_c=0,neg_c=0,zero_c=0;
	
	for(i=0;i<10;i++)
	{
		printf("enter elements of array");
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<10;i++)
	{
		if(a[i]>0)
		{
			pos_c=pos_c+1;
		}
		else if(a[i]<0)
		{
			neg_c=neg_c+1;
		}
		else
		{
			zero_c=zero_c+1;
		}
	}
	printf("number of positive numbers are %d",pos_c);
	printf("number of negative numbers are %d",neg_c);
	printf("number of zero elemrnts are %d",zero_c);
	return 0;
}
