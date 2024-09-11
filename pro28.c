//PROGRAM TO CHECK WHETHER THE NO IS ARMSTRONG OR NOT
#include<stdio.h>
int main()
{

	int n, remainder, total=0, temp;
	printf("Enter the number:");
	scanf("%d", &n);
	
	temp=n;
	while(n>0)
	{
		remainder = n%10;
		total = total+(remainder * remainder * remainder);
		n=n/10;
	}
	
	if(temp==total)
	{
		printf(" The number is an Armstrong");
	}
	else
	{
		printf("The number is not an armstrong ");
	}

return 0;
}
