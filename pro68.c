//multiplicatio of matrix
#include<stdio.h>
#include<stdlib.h>
int main(){
	int x[3][3],s1[3][3],y[3][3],i,j;
	//first matrix
	printf ("enter elements of first matrix");
	for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    
    }
    printf("the matrix is as follows");
    for(i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            printf("%d",x[i][j]);
        }
        printf("\n");
        
    }
    //second matrix
    printf ("enter elements of second matrix");
	for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            scanf("%d",&y[i][j]);
        }
    
    }
    printf("the matrix is as follows");
    for(i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            printf("%d",y[i][j]);
        }
        printf("\n");
        
    }
    //multiplication
    int result[i][j],k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            result[i][j]=0;
            for(k=0;k<3;k++)
            {
                result[i][j]=result[i][j]+x[i][k]*y[k][j];
            }
        }
    }
    printf("result of multiplication");
    for(i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            printf("%d",result[i][j]);
        }
        printf("\n");
        
    }
    return 0;
    getch();
}
    
    
