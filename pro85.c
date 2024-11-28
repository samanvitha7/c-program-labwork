//function to read a charachter and check if it is vowel or not
 
#include<stdio.h>

void vowel(char ch); 

int main() {
    char ch;
    printf("Enter the character: "); 
    scanf(" %c", &ch); 
    vowel(ch);
    return 0; 
}

void vowel(char ch) {
    
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || 
        ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || 
        ch == 'u' || ch == 'U')
    {
        printf("Entered character is a vowel\n");
    } 
	else 
	{
        printf("Entered character is not a vowel\n");
    }
}

