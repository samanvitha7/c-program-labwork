//function to calculate factorial(NCR) of a given number
#include<stdio.h>
double factorial(double num);
int main()
{
    double n,r,result;
    printf("enter the value of n and r");
    scanf("%lf %lf",&n,&r);
    result=factorial(n)/(factorial(n-r)*factorial(r));
    printf("NcR of the entered values:%lf",result);
    getch();
}

double factorial(double num)
{
       double fact=1;
       int i;
       for(i=1;i<=num;i++)
       {
           fact=fact*i;
       }
       return fact;
}
    
