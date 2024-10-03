//addition of matrix
#include<stdio.h>
 int enter_ele(int a[3][3]);
 int display_ele(int a[3][3]);
 int sum(int a[3][3],int b[3][3]);
 int main()
 {
     int x[3][3],s1[3][3],y[3][3],i,j;
     enter_ele(x[3][3]);
     display_ele(x[3][3]);
     enter_ele(y[3][3]);
     display_ele(y[3][3]);
     sum(x[3][3],y[3][3]);
     getch();
} 
int enter_ele(int a[3][3])
{ 
     int i,j;
     printf("enter the elements of matrix");
     for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    
    }
}    
int display_ele(int a[3][3])
{   int i,j;
    printf("the matrix is as follows");
    for(i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
        
    }
}
int sum(int a[3][3],int b[3][3])
{
     int i,j;
    int sum1[3][3];
    for(i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            sum1[i][j]=a[i][j]+b[i][j];
        }
        
    }
    printf("the sum of two matrix is as follows");
    for(i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            printf("%d",sum1[i][j]);
        }
        printf("\n");
        
    }
}
