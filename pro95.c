/* pro95 WRITE A C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER
,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE A STRUCTURE POINTER AND AN
ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND
PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY.*/

#include <stdio.h>
struct Employee
 {
    int empNumber;
    char empName[50];
    float basicPay;
};

int main() 
{
    struct Employee employ[50]; 
    struct Employee *ptr; 
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);
    int i;

    // Read employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employ[i].empNumber);
        printf("Employee Name: ");
        scanf("%s", employ[i].empName);
        printf("Basic Pay: ");
        scanf("%f", &employ[i].basicPay);
    }

    // Print employee details
    printf("\nList of Employees:\n");
    for (i = 0; i < n; i++) {
        ptr = &employ[i];
        printf("Employee Number: %d\n", ptr->empNumber);
        printf("Employee Name: %s\n", ptr->empName);
        printf("Basic Pay: %.2f\n\n", ptr->basicPay);
    }

    return 0;
}



