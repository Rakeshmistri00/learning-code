/*
Q: Ramesh's basic salary is input through the keyboard. 
   His Dearness Allowance (DA) is 40% of basic salary 
   and House Rent Allowance (HRA) is 20% of basic salary. 
   Write a program to calculate his gross salary.
*/

#include <stdio.h>

int main() {
    float basic_salary, da, hra, gross_salary;

    // Ask user to enter the basic salary
    printf("Enter Ramesh's basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate Dearness Allowance (40% of basic)
    da = 0.40 * basic_salary;

    // Calculate House Rent Allowance (20% of basic)
    hra = 0.20 * basic_salary;

    // Calculate Gross Salary = basic + DA + HRA
    gross_salary = basic_salary + da + hra;

    // Display the gross salary
    printf("Ramesh's Gross Salary = %.2f\n", gross_salary);

    return 0;
}
