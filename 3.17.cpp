#include <stdio.h>

int main() {
    int accountNumber;
    double beginningBalance, totalCharges, totalCredits, creditLimit;

    while (1) {
        // Input customer information
        printf("Enter account number (-1 to end): ");
        scanf("%d", &accountNumber);

        if (accountNumber == -1) {
            break;
        }

        printf("Enter beginning balance: ");
        scanf("%lf", &beginningBalance);

        printf("Enter total charges: ");
        scanf("%lf", &totalCharges);

        printf("Enter total credits: ");
        scanf("%lf", &totalCredits);

        printf("Enter credit limit: ");
        scanf("%lf", &creditLimit);

        // Calculate new balance
        double newBalance = beginningBalance + totalCharges - totalCredits;

        // Check if new balance exceeds the credit limit
        if (newBalance > creditLimit) {
            printf("Account: %d\n", accountNumber);
            printf("Credit limit: $%.2lf\n", creditLimit);
            printf("New balance: $%.2lf\n", newBalance);
            printf("Credit limit exceeded.\n");
        }

        printf("\n");
    }

    return 0;
}

