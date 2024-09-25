//pattern2
#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for(j=5;j>=1;j--)
		{
			if(5-i<j&j<=5)
			{
				printf("%d",6-j);
			}
		}
		printf("\n");
	}
}
