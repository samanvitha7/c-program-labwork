// pro98 WRITE A C PROGRAM TO FIND THE PRODUCT OF 2 MATRICES USING POINTER USING DYNAMIC MEMORY ALLOCATION
#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    printf("Enter dimension : ");
    scanf("%d", &n);

    int rows = n, cols = n,i,j,k; 

    //1
        int** arr1= (int**)malloc(rows * sizeof(int*));
        
        for ( i = 0; i < rows; i++) {
            arr1[i] = (int*)malloc(cols * sizeof(int));
        }

        printf("Enter first array... \n");
        for ( i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                scanf("%d", &arr1[i][j]);
            }
        }

    //2
        int** arr2= (int**)malloc(rows * sizeof(int*));
        
        for (i = 0; i < rows; i++) {
            arr2[i] = (int*)malloc(cols * sizeof(int));
        }

        printf("Enter second array... \n");
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                scanf("%d", &arr2[i][j]);
            }
        }
        
    //3
        int** arr3= (int**)malloc(rows * sizeof(int*));
        
        for (i = 0; i < rows; i++) {
            arr3[i] = (int*)malloc(cols * sizeof(int));
        }

    for(i=0; i<rows; i++) {
        for( j=0; j<cols; j++) {
            arr3[i][j]=0;
            for(k=0; k<n; k++) {
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }

    printf("Multiplication......\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
