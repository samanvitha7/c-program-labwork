// finding gross salary
#include<stdio.h>
int main(){
	float salary,extra_1,extra_2,gross_salary;
	printf("enter values of salary, rent allowance,travel allowance:");
	scanf("%f %f %f",&salary,&extra_1,&extra_2);
	gross_salary=salary+extra_1+extra_2;
	printf("gross salary:%f",gross_salary);
}
