//Check whether entered charachter is lowercase/uppercase/digit/special symbol
#include<stdio.h>
int main(){
	char ch;
	printf("enter a charachter");
	scanf("%c",&ch);
	if(ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is uppercase alphabet.", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is lowercase alphabet.", ch);
    }
    else if(0<=ch<=9){
		printf("entered charachetr is digit");
	}
    else
    {
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;
    getch();
	
}
