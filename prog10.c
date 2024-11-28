// to find cut of marks of student
#include<stdio.h>
int main(){
	float math,physics,chem,entrance,cm;
	printf("enter marks of math, chem, physics");
	scanf("%f %f %f",&math,&chem,&physics);
	printf("enter marks of entrance exam out of 100 marks");
	scanf("%f",&entrance);
	cm=math/2+physics/2+chem/2+entrance;
	printf("cut of mark of student is:%f",cm);
	return 0;
}
