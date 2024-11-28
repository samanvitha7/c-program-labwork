/*pro100 FILE CALLED “LNMIITSTUDENT.JAVA” CONTAINS INFORMATION SUCH AS STUDENT ROLL NUMBER, NAME AND TOTAL MARKS. 
WRITE A C PROGRAM TO CREATE A FILE TO STORE DETAILS OF N STUDENTS*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *p1;
    int n, i;
    int roll_no;
    float t_marks;
    char name[10];

    
    p1 = fopen("limitstudent.txt", "w");

    if (p1 == NULL) {
        printf("Error opening file!\n");
        exit(1); 
    }

    printf("Enter the number of students whose details are to be stored: ");
    scanf("%d", &n);

    printf("Enter details of students:\n");
    printf("Enter roll number, name, total marks\n");

    for (i = 0; i < n; i++)
	 {
        printf("Student %d: ", i + 1);
        scanf("%d %s %f", &roll_no, name, &t_marks);
        fprintf(p1, "%d %s %f\n", roll_no, name, t_marks);  
    }

    fclose(p1);

    // Open the file in read mode for printing
    p1 = fopen("limitstudent.txt", "r");

    if (p1 == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("\nPrinting data from the file:\n");
    printf("Roll number\tName\tTotal Marks\n");

    for (i = 0; i < n; i++) {
        fscanf(p1, "%d %s %f", &roll_no, name, &t_marks);
        printf("%d\t\t%s\t\t%.2f\n", roll_no, name, t_marks);  
    }

    fclose(p1);

    return 0;
}
