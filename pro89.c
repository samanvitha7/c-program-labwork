//pro89 to copy elements of one array to other in reverse order
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
		*(bptr+i)=*(aptr+4-i);
	}
	printf(" elements of second \n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(bptr+i));
	}
	return 0;
	
}

