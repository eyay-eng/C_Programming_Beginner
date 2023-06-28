/*
*
*   Written By: Aaron Hale
*   Date: 06/27/23
*
*   Practive initializing structures in C
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employeeInfo{
        char empName[100];
        char hireDate[10];
        float Salary;
    };

int main(){

    struct employeeInfo newEmp;

    strcpy(newEmp.empName,"Charles");
    strcpy(newEmp.hireDate, "06/27/23");
    newEmp.Salary = 135000.00;

    printf("The new employee %s was hired on %s with a salary of $%.2f\n",newEmp.empName,newEmp.hireDate,newEmp.Salary);


    return(0); 
}

//name.
//hire date
//