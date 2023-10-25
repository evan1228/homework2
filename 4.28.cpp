#include <stdio.h>

int main() {
    int payCode;
    double weeklyPay = 0.0;

    printf("��J�u��N�X�]1:managers�A2:hourly workers �A3:com-mission workers�A4:pieceworkers�^�G");
    scanf("%d", &payCode);

    switch (payCode) {
        case 1:
            double fixedSalary;
            printf("��J�g�z���C�P�T�w�~���G");
            scanf("%lf", &fixedSalary);
            weeklyPay = fixedSalary;
            break;
        case 2: 
            double hourlyWage;
            int hoursWorked;
            printf("��J�C�p�ɤu��G");
            scanf("%lf", &hourlyWage);
            printf("��J�u�@���p�ɼơG");
            scanf("%d", &hoursWorked);
            if (hoursWorked <= 40) {
                weeklyPay = hourlyWage * hoursWorked;
            } else {
                weeklyPay = (40 * hourlyWage) + ((hoursWorked - 40) * 1.5 * hourlyWage);
            }
            break;
        case 3: 
            double grossSales;
            printf("��J�C�P�`�P���B�G");
            scanf("%lf", &grossSales);
            weeklyPay = 250 + (0.057 * grossSales);
            break;
        case 4: 
            double pieceRate;
            int piecesProduced;
            printf("��J�C��u�@�����S�G");
            scanf("%lf", &pieceRate);
            printf("��J�Ͳ�����ơG");
            scanf("%d", &piecesProduced);
            weeklyPay = pieceRate * piecesProduced;
            break;
        default:
            printf("�L�Ī��u��N�X�C\n");
            return 1;
    }

    printf("�C�P�u��G$%lf\n", weeklyPay);
    return 0;
}

