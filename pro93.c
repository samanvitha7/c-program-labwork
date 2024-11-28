//pro93 A PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.
#include<stdio.h>
#include<string.h>
int main(){
	char text[100];
	char *ptr;
	printf("enter the string");
	gets(text);
	ptr=text;
	int word,i,count=0;
	for(i=0;i<strlen(text);i++)
	{
		if(*(ptr+i)==' ')
		{
			count++;
		}
		else
		{
			continue;
		}
	}
	printf("no. of words in the text entered is %d",count+1);
	return 0;
}
