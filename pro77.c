//function to check whether number is palindrome or not
#include<stdio.h>
void is_palindrome(int num);

int main()

{
    int num;
    printf("enter number");
    scanf("%d",&num);
    is_palindrome(num);

    
}
void is_palindrome(int num)
{
	int r,reverse,temp;
	reverse=0;
	temp=num;
    
    while(num!=0)
    {
    	
    	  
          r=num%10;
          reverse=reverse*10+r;
          num=num/10;
    }
    if(reverse==temp)
    {
       printf("entered number is palindrome");
    }
    else
    {
        printf("number is not palindrome");
    }
    
}      
