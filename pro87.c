//program to read info of 10 students and display the info of students whose marks are greater than 500
#include<stdio.h>

struct info
{
	int roll_no;char name[20];float marks;
};
int main()
{
	struct info stu[3];
	int i;
	printf("enter details of students\n");
	printf("enter roll no,name,marks\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&stu[i].roll_no);
		scanf("%s",&stu[i].name);
		scanf("%d",&stu[i].marks);
	}
	for(i=0;i<3;i++)
	{
		if(stu[i].marks>500)
		{
			printf("%d",stu[i].roll_no);
		    printf("%s",stu[i].name);
		    printf("%d",stu[i].marks);
		}
	}
	return 0;
	
}
