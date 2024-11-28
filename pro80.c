//function to print fibonacci numbers
#include<stdio.h>
int fib(int n);
int main()
{
    int num,i;
    printf("enter no. of terms");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("%d",fib(i));
    }
    
}

int fib(int num)
{
    if(num==0)
    {
           return 0;
    }
    else if(num==1)
    {
           return 1;
    }
    else
    {
        return(fib(num-1)+fib(num-2));
    }
    
}    
