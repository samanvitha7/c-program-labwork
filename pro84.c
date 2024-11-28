//read info of book and display
#include<stdio.h>
int main()
{
	FILE *f1,*f2;
	char ch;
	printf("taking input for content of book:");
	//taking input from user
	f1=fopen("book","w+");
	while((ch = getchar())!= EOF)
	{
		putc(ch,f1);//ctrl+z to indicate eof
	}
	fclose(f1);
	printf("output");
	f1=fopen("book","r");
	while((ch=getc(f1))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(f1);
	return 0;
}
	
