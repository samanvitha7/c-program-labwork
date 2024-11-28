//read a line of text and find out length of string
#include<stdio.h>
#include<string.h>
int main()
{
	int length;
	char text[200];
	printf("enter the text");
	gets(text);
	length=strlen(text);
	printf("%d",length);
	return 0;
}
