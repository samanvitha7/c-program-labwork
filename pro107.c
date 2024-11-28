/* pro107 IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS LAST N DIGITS*/
#include <stdio.h>
#include <math.h>

// Function to flip the last n digits of a number
int flip(int num, int n) {
    int divisor = pow(10, n);
    int lastNDigits = num % divisor;
    int remainingDigits = num / divisor;
    
    int reversed = 0;
    while (lastNDigits > 0) {
        reversed = reversed * 10 + lastNDigits % 10;
        lastNDigits /= 10;
    }
    
    return remainingDigits * divisor + reversed;
}

int main() {
    int num, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the number of digits to flip: ");
    scanf("%d", &n);
    
    int result = flip(num, n);
    printf("Result after flipping the last %d digits: %d\n", n, result);
    
    return 0;
}

