//transpose of matrix
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
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
    printf("the matrix is as follows\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
        
   }
   //transposing matrix 
   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
        }
        printf("\n");
        
   }
   //printing transpose of matrix
   printf("matrix after transpose\n");
   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
        
   }
   getch();
   

}
