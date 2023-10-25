#include <stdio.h>

int main() {
    double principal, rate, interest;
    int days;

    while (1) {
        // Input principal amount
        printf("Enter principal amount (-1 to end): ");
        scanf("%lf", &principal);

        if (principal == -1.0) {
            break;
        }

        // Input annual interest rate
        printf("Enter annual interest rate (as a decimal): ");
        scanf("%lf", &rate);

        // Input number of days
        printf("Enter number of days: ");
        scanf("%d", &days);

        // Calculate simple interest
        interest = (principal * rate * days) / 365.0;

        // Display the calculated interest
        printf("Simple interest: $%.2lf\n\n", interest);
    }

    return 0;
}

