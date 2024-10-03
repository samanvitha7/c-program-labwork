//to perform linear search on array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,ele,i,index,temp=0;
    printf("enter no. of elements u want to enter in array");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array\n");
	for( i=0;i<n;i++)
    {
            scanf("%d",&a[i]);
    }
    printf("the array is as follows");
    for(i=0;i<n;i++)
    {
            printf("%d",a[i]);
        
    }
    printf("enter the element to search");
    scanf("%d",&ele);
    for (i=0;i<n;i++)
    {
        if(ele==a[i])
        {
           printf("element found");
           index=i;
           temp=temp+1;
        }
        else
        {
            continue;
        }
    }
    if (temp==0)
    {
        printf("entered element is not present in array");
    }  
    printf("the element is found at index %d",index);
    
    getch();
}
    
    
