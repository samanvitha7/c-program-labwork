//pro 96  A PROGRAM TO SORT THE GIVEN N NUMBER OF STRINGS IN ASCENDING ORDER USING POINTERS
#include <stdio.h>
#include <string.h>

int main() {
    int n,i,j;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char strings[n][100]; 
    char *ptrs[n];    

    printf("Enter the strings:\n");
    for (i = 0; i < n; i++)
	 {
        gets(strings[i]);
        ptrs[i] = strings[i]; // Assign pointer to the current string
    }

    // Bubble Sort using pointers
    for (i=0; i<n; i++)
	 {
        for ( j=i+1; j<n; j++)
		 {
            if (strcmp(ptrs[i], ptrs[j]) > 0)
			 {
                // Swap pointers
                char *temp = ptrs[i];
                ptrs[i] = ptrs[j];
                ptrs[j] = temp;
            }
        }
    }

    printf("Strings in ascending order:\n");
    for ( i = 0; i < n; i++) {
        printf("%s\n", ptrs[i]);
    }

    return 0;
}
