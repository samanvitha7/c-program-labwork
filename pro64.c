//find the sum of elements of each row of matrix
#include<stdio.h>
int main()
{
    int a[3][3],sum1,sum2,sum3,i,j;
    printf("enter the elements of matrix"); 
    //entering elements
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    
    }
    //printing matrix
    printf("the matrix is as follows");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
        
   }
   sum1=a[0][0]+a[0][1]+a[0][2];
   sum2=a[1][0]+a[1][1]+a[1][2];
   sum3=a[2][0]+a[2][1]+a[2][2];
   printf("sum of 1st row elements is %d",sum1);
   printf("sum of 2nd row elements is %d",sum2);
   printf("sum of 3rd row elements is %d",sum3);
   getch();
} 
