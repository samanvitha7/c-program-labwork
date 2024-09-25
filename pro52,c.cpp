//program52
#include<stdio.h>
int main(){
	int i,j,m;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4-i;j++)
		{
			printf(" ");
		}
		m=1;
		for(j=1;j<=i;j++)
		{
			printf("%d",m++);
		}
		
		for(j=1;j<i;j++)
		{
            printf("%d",i-j);
            }
		printf("\n");
	}
}

