//read an array and find out maximum element
#include<stdio.h>

int max_ele(int arr[],int n);
int main()

{
    int num,i;
    printf("enter no. of elements in array");
    scanf("%d",&num);
    int arr[num];
    printf("enter the elements of array");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    } 
    //display the contents of array
    printf("elements of array");

    for(i=0;i<num;i++)
    {
        printf("%d\n",arr[i]);
    } 
    max_ele(arr,num);//calling the function
}

int max_ele(int arr[],int n)
{
    int max,i;
    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else
        {
           continue;            
        }
    }
    printf("max element in array :%d",max);
} 
  
    

