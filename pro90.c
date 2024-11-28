//pro90 find length of the string including and excluding space using pointers
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char text[100];
	int l=0,count=0,i;
	char *ptr=text;
	printf("enter the string ");
	gets(text);
	
	printf("\nentered string is:");
	puts(text);
	for(i=0;*(ptr+i)!='\0';i++)
	{
		count++;
	}
	printf("length of array including spaces:%d",count);
	for(i=0;*(ptr+i)!='\0';i++)
	{
		if(*(ptr+i)==' ')
		{
			count--;
		}
	}
	
	printf("\nlength of array without spaces:%d",count);
	
	
}
