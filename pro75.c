//program 75
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[11][11],n,i,j;
    printf("enter no. of students");
    scanf("%d",&n);
    printf("\n enter student roll number\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[0][i]);
    }
    printf("enter marks of first subject of n students");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[1][i]);
    }
    printf("enter marks of second subject of n students");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[2][i]);
    }
    printf("enter marks of third subject of n students");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[3][i]);
    }
    //display the table
    printf("entered marks of all students");
    for(i=0;i<4;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    //total marks obtained by each student
    int t_marks=0,marks[10],max,h_roll;
    for(i=0;i<n;i++)
    {
       t_marks=a[1][i]+a[2][i]+a[3][i];
       printf("total marks of student%d is %d",i+1,t_marks);
       marks[i]=t_marks;
       t_marks=0;
    }
    //highest marks in total
    max=marks[0];
    for(i=0;i<n;i++)
    {
        if (marks[i]>max)
        {
            max=marks[i];
            h_roll=i+1;
        }
    	else
        {
            continue;
        }
        printf("highest marks is %d and is scored by roll no %d",max,h_roll);
     }
     getch();
}
        	
	
       
        
    
        
        
