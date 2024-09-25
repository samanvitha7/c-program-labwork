//pattern 3
#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter no. of rows u want to enter");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         for(j=n;j>i;j--)
         {
             printf(" ");
         }
         for(k=1;k<=i;k++)
         {
             printf("*");
             }
         printf("\n");
         }
         }    
             
                                                       
