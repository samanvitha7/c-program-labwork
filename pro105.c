/* pro105 WRITE A PROGRAM IN C TO PRINT ALL PERMUTATIONS OF A GIVEN STRING USING POINTERS. THE PERMUTATIONS OF THE STRING ARE:
 ABCD ABDC ACBD ACDB ADCB ADBC BACD BADC BCAD BCDA BDCA BDAC CBAD CBDA CABD CADB CDAB CDBA DBCA DBAC DCBA DCAB DACB DABC*/
 
 
#include <stdio.h>
#include <string.h>

// Function to swap characters
void swap(char *x, char *y)
 {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Function to generate permutations
void permute(char *str, int left, int right)
 {
 	int i;
    if (left == right) 
	{
        printf("%s\n", str);
    } 
	else
	 {
        for ( i = left; i <= right; i++) 
		{
            swap((str + left), (str + i));
            permute(str, left + 1, right);
            swap((str + left), (str + i)); // backtrack
        }
    }
}

int main() 
{
    char str[] = "ABCD";
    int n = strlen(str);
    printf("Permutations of the string are:\n");
    permute(str, 0, n - 1);
    return 0;
}



