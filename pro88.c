//pro88 copy elements of one array to other using pointers
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],b[5],i;
	int *aptr,*bptr;
	aptr=a;
	bptr=b;
	printf("enter elements of first array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",(aptr+i));
	}
	for(i=0;i<5;i++)
	{
		*(bptr+i)=*(aptr+i);
	}
	printf(" elements of second \n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(bptr+i));
	}
	return 0;
	
}
	
