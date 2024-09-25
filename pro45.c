//guess number
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int random_no,input;
    random_no=rand();
    printf("%d",random_no);
    do{
           printf("\nenter a number");
           scanf("%d",&input);
           if(random_no>input)
           {
               printf("number guessed is low");
               }
           else if(random_no<input)
           {
               printf("number guessed is high");
               }
           }while(random_no!=input);
           printf("guessed it right");
           }
