//pro91 find the cube and square of a number entereds using pointers
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,square,cube;
	int *nptr;
	printf("enter the number");
	scanf("%d",&n);
	nptr=&n;
	square=*nptr * *nptr;
	cube=*nptr * *nptr * *nptr;
	printf("square=%d cube=%d",square,cube);
	return 0;
 } 
