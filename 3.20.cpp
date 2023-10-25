#include <stdio.h>

int main() {
    int employees;
    
    printf("Enter the number of employees: ");
    scanf("%d", &employees);

    for (int i = 0; i < employees; i++) {
        double hoursWorked, hourlyRate, grossPay;
        
        printf("Enter the number of hours worked for Employee %d: ", i + 1);
        scanf("%lf", &hoursWorked);
        
        printf("Enter the hourly rate for Employee %d: $", i + 1);
        scanf("%lf", &hourlyRate);
        
        if (hoursWorked <= 40) {
            grossPay = hoursWorked * hourlyRate;
        } else {
            double overtimeHours = hoursWorked - 40;
            grossPay = (40 * hourlyRate) + (overtimeHours * hourlyRate * 1.5);
        }
        
        printf("Gross pay for Employee %d: $%.2lf\n\n", i + 1, grossPay);
    }

    return 0;
}

