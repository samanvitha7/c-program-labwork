/* pro109 MODIFY VALUE STORED IN OTHER VARIABLE USING A POINTER IN C
A. INITIALIZE THE POINTER WITH THE OTHER (A NORMAL VARIABLE WHOSE VALUE WE HAVE TO
MODIFY)*/
#include <stdio.h>

int main()
 {
	int num = 10;
	
	int *ptr = &num;

	printf("value of num: %d\n", num);
	printf("value of num: (using pointer): %d\n", *ptr);

	
	*ptr = 20;

	printf("value of num: %d\n", num);
	printf("value of num (using pointer): %d\n", *ptr);

	return 0;
}
