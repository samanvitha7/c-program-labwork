//TO FIND FACTORIAL OF A NUMBER
#include<stdio.h>
int main(){
	int i,fact;
	signed n;
	printf("enter number whose factorial is to be found");
	scanf("%d",&n);
	
	if(n<0){
		
		printf("factorial of negative number is not possible");
	}
	else
	{
	
	  for(i=1;i<=n;i++)
	
	  fact=fact*i;
    
   }
	printf("factorial of given number :%d",fact);
	return 0;
	
}
