//to print 1/1!+2/2!+3/3!...n
#include<stdio.h>
int main(){
	int n,i;
	printf("enter number upto which you want to print");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d/%d! +",i,i);
		
		
	}
	
	return 0;
}
