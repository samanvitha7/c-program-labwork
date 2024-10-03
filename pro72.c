//rotation of array by n positions
#include<stdio.h>
int main()
{
    int n,m,i,temp;
    printf("enter no. of elements in array");
    scanf("%d",&m);
    int a[m];
    printf("enter elemets of array");
    for(i=0;i<m;i++)
    {
        scanf("%d\n",&a[i]);
    }
    printf("entered array is");
    for(i=0;i<m;i++)
    {
        printf("%d\t",a[i]);
    }
    //rotation of array
    int j;
    for(i=0;i<n;i++)
    {
        temp=a[n-1];
        for(j=n-1;j>0;j--)
        {
            a[j]=a[j-1];
        }   
        a[0]=a[n-1];
    }
    printf("array after rotation");
    for(i=0;i<m;i++)
    {
        printf("%d\t",a[i]);
    }
    getch();
}
    
