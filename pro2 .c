//To read marks of five subject of student and thereby calculate total marks and percentage
#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5,total,percentage;
	printf("enter marks of five subjects:");
	scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
	total=s1+s2+s3+s4+s5;
	percentage=(total/500)*100;
	printf("total marks:%f",total);
	printf("percentage scored is:%f",percentage);
}
