//program 53
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>5-(i-1)&&j<5+(i-1))
            {
               printf("*");
               }
            else
            {
                printf(" ");
                }
            
            }
            printf("\n");
    }
    for(i=5;i<=1;i--)
    {
        for(j=5;j<i;j--)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
           printf("*");
        }
        printf("\n");
    }
}         

