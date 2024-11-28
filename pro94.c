//pro 94 A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING POINTERS
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	printf("enter the string:");
	gets(a);
	char *aptr,*bptr;
	aptr=a;
	bptr=b;
	int i,len;
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		*(bptr+i)=*(aptr+len-1-i);
	}
	printf("\nstring before reversing:");
	puts(a);
	printf("\nstring after reversing:");
	puts(b);
	return 0;
	
}

