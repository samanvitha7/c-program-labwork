//to read 3X3 matrix and findout max and min element
#include<stdio.h>
int main()
{
    int a[3][3],max,min,i,j;
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
    //finding max and min element
    min=a[0][0];
    max=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if (a[j]>max)
            {
                         max=a[j];
            } 
            if (a[j]<min)
            {
                         min=a[j];
            } 
            
        }
        }
        printf("max element is %d",max);
        printf("min element is %d",min);
    
    getch();
}
    
