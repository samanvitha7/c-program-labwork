//subtracting two arrays
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
    //subtraction of two matrix
    int s[3][3];
    for(i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            s[i][j]=x[i][j]-y[i][j];
        }
        
    }
    printf("result of matrix subtraction");
    for(i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            printf("%d",s[i][j]);
        }
        printf("\n");
        
    }
    getch();
}
