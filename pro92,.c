#include <stdio.h>

int main() {
    int n, max, i;
    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);

    int arr[n];  
    int *ptr = arr;  

    // Input elements into the array
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", (ptr + i));  
    }

    // Initialize max to the first element
    max = *ptr;  

    
    for(i = 1; i < n; i++) {  // Start from the second element
        if(*(ptr + i) > max)
	    {
            max = *(ptr + i);
        }
    }

    // Output the greatest element
    printf("Greatest of the entered elements: %d\n", max);
    return 0;
}
