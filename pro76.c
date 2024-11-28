//function to check if num is even or odd
#include<stdio.h>
int check(int num);
int main()
{
    int num;
    printf("enter number");
    scanf("%d",&num);
    check(num);
    return 0;

}
int check(int num)
{
    if(num%2==0)
    {
                printf("num is even");
    }
    else
    {
        printf("num is odd");
    }
} 
