//program to swap values of two variables
#include<stdio.h>
int swap(int a,int b);
int main()
{
    int a,b;
    printf("enter values of two variables:");
	scanf("%d %d",&a,&b);
    swap(a,b);
    return 0;
    
}
int swap(int a,int b)
{
	
    int c;
	c=a;
	a=b;
	b=c;
	printf("final value first variable :%d\n",a);
	printf("final value of second variable:%d ",b);

	
	
}
