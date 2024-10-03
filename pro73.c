//elections
#include<stdio.h>
int main()
{
    int i,votes[5],ballot,count[5]=0;
    char ch;
    printf("enter the ballot number:");
    scanf("%d",&ballot);
    
    switch(ballot)
    {
                  case 1 :count[1]++;
                          break;
                  case 1 :count[1]++;
                          break;
                  case 2 :count[2]++;
                          break;
                  case 3 :count[3]++;
                          break;
                  case 4 :count[4]++;
                          break;
                  case 5 :count[5]++;
                          break;
                  default:count[0]++;
                  }
                  void display(int n)
                  {
                       if (n<5)
                       printf("%d",count[n]);
                       else
                       printf("spoilt");
                       
                  printf("want to enter te next vote?(y/n)");
                  scanf("%d",&ch);
                  while(ch=='y')
                  {
                        for(i=1;i<=5;i++)
                        {
                            printf("no. of votes for candidates");
                                         
                                                 
                          
