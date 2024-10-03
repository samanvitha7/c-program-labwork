//merging two arrays and arranging in ascending order
#include<stdio.h>
#include<conio.h>
void sort(int x,int y);
void merge(int a[],int b[],int n, int m);

int main()
{
    int i,j,m,n;
    printf("enter no. of elements in first array");
    scanf("%d",&n);
    printf("enter no. of elements in second array");
    scanf("%d",&m);
    int a1[n],a2[m];
    printf("enter elements of first array in ascending order");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }    
    printf("enter elements of second array in ascending order");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a2[i]);
    }   
    merge(a1,a2,n,m);
    getch();
}
void merge(int a[],int b[],int n,int m)
{
     int i=0,result[m+n],j=0,k=0,count=0;
     while(i<=n&&j<=m)
     {
           if(a[i]<b[j])
           {
              result[k]=a[i];
              i++;
              k++;
           }
           if(a[i]>b[j])
           {
              result[k]=b[j];
              j++;
              k++;
           } 
           if(a[i]=b[j])
           {
              result[k]=a[i];
              i++;
              j++;
              k++;
              count++;
           }
     }
     if(i<n&&j==m)
     {
        while(i<n)
        {
                  result[k]=a[i];
                  i++;
                  k++;
        }
     } 
     if(i==n&&j<=m)
     {
        while(j<m)
        {
                  result[k]=b[j];
                  j++;
                  k++;
        }
     } 
     printf("array after merging");
     for(i=0;i<m+n-count;i++)
     {
         printf("%d",result[i]);
     }
     }
                         
                
    
    
    
    
