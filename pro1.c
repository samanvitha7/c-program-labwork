// to calculate simple interest
#include<stdio.h>
int main()
{
 float p,sinterest;
 int time,roi;
 printf("enter values of principle,time period,rate of interest");
 scanf("%f %d %d",&p ,&time, &roi);
 sinterest=p*time*roi/100;
 printf("simple interst =%f",sinterest);
}
