//progran to print the sum of odd and even no
#include<stdio.h>
int main()
{
	int i ,n,E_sum=0, O_sum=0;
	printf("Enter the value of n:");
	scanf("%d", &n);
	
	for (i=1; i<=n; i++)
	{
		if(i%2==0)
		{
			E_sum= E_sum+i;
		}
		else
		{
		      O_sum=O_sum+i;	
		}	
	}
	
	printf(" \n The sum of even number upto %d=%d", n, E_sum);
	printf("\n The sum of odd number upto %d = %d", n, O_sum);
}
