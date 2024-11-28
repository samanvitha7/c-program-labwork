// pro101 A C PROGRAM TO ADD /APPEND INFORMATION TO THE FILE “LNMIITSTUDENT.txt”
#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *p1;
    int n, i,extra;
    int roll_no;
    float t_marks;
    char name[10];

    
    p1 = fopen("limitstudent.txt", "a");

    if (p1 == NULL) {
        printf("Error opening file\n");
        exit(1); 
    }

    printf("Enter the number of students whose details are to be appended: ");
    scanf("%d", &extra);

    printf("Enter details of students:\n");
    printf("Enter roll number, name, total marks\n");

    for (i = 0; i < extra; i++)
	 {
        printf("Student %d: ", i + 1);
        scanf("%d %s %f", &roll_no, name, &t_marks);
        fprintf(p1, "%d %s %f\n", roll_no, name, t_marks);  
    }

    fclose(p1);
    printf("contents appended successfully");

    
    return 0;
}
