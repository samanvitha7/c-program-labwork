//to find max and min
#include<stdio.h>
int main(){
	int fmax=0,smax=0,n;
	
	while(n!=0)
	{
		printf("enter any number");
		scanf("%d",&n);
		if(n>fmax)
		{
			smax=fmax;
			fmax=n;
		}
		else if(smax>n)
		{	
		smax=n;
		}
		
	}
	printf("first maximum number:%d",fmax);
	printf("smallest number:%d",smax);
	return 0;
	
	
}
