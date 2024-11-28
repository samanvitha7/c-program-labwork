//pro92 A PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,max=0,i;
	printf("enter no. of elements u want to enter");
	scanf("%d",&n);
	int arr[n];
	int *ptr;
	ptr=arr;
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",(ptr+i));
	}
	max=*ptr;
	for(i=1;i<n;i++)
	{
		if(max<*(ptr+i))
		{
			max=*(ptr+i);
		}
		else
		{
			continue;
		}
		
	}
	printf("greaest of the entered elements:%d",max);
	return 0;
	
}
