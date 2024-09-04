//to read a charachter and check it is lowercase or not using conditional operator
#include<stdio.h>
int main(){
	char ch,result;
	printf("enter any charachter");
	scanf("%c",&ch);
	result= 'a'<=ch<='z' ?printf("entered charachter is in smallcase"):printf("entered charachter is not smallcase");
	return 0;
	
}
