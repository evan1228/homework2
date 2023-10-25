#include <stdio.h>

int main() {
    double grossSales;
    double earnings;

    while (1) {
        // Input gross sales
        printf("Enter gross sales (-1 to end): ");
        scanf("%lf", &grossSales);

        if (grossSales == -1) {
            break;
        }

        // Calculate earnings
        earnings = 200.0 + (0.09 * grossSales);

        // Display the earnings
        printf("Earnings: $%.2lf\n\n", earnings);
    }

    return 0;
}

