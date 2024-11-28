//pro99PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS PRESENT IN THE FILE
#include<stdio.h>
#include<ctype.h>
int main()
{
	FILE *f1;
	char ch;
	int count=0;
	f1=fopen("check.txt","r");
	while(ch = getc(f1) != EOF)
	{
		
		
		switch(tolower(ch))
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			        	count++;
			        	break;
			         
		}
		
	}
	
	printf("no. of vowels in the file are %d",count);
	fclose(f1);
}
