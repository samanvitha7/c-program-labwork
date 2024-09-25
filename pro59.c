//swap values of wo arrays
#include<stdio.h>
int main(){
	int a1[10],a2[10],i,temp;
	printf("enter elements of first array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("enter elements of second array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a2[i]);
	}
	for(i=0;i<10;i++)
	{
		temp=a1[i];
		a1[i]=a2[i];
		a2[i]=temp;
	}
	printf("after swaping elements of array1");
	for(i=0;i<10;i++)
	{
		printf("%d\n",a1[i]);
	}
	printf("after swaping elements of array2");
	for(i=0;i<10;i++)
	{
		printf("%d\n",a2[i]);
	}
	return 0;
}

