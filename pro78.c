//function to check if function is armstrong or not
#include<stdio.h>
#include<math.h>
int armstrong(int num);
int main()
{
    int num;
    printf("enter number");
    scanf("%d",&num);

    armstrong(num);
    return 0;
    
}
int armstrong(int num)
{

    int temp,sum=0,r;
    temp=num;
    while(num!=0)
    {
          r=num%10; 
          sum=sum+r*r*r;
          num=num/10;
    }
    if(sum==temp)
    {
       printf("entered number is armstrong");
    }
    else
    {
        printf("number is not armstrong");
    }
    
}      


