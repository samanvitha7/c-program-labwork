//pro 97  A PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char text[100];
	printf("enter a string:");
	gets(text);
	char *ptr;
	int count=0,i;
	for(i=0;i<(strlen(text)-1);i++)
	{
		char ch=tolower(*(ptr+i)); //convert to lower case
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			count++;
		}
	}
	printf("vowels:%d",count);
	return 0;
	
}
