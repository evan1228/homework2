#include <stdio.h>

int main() {
    int payCode;
    double weeklyPay = 0.0;

    printf("輸入工資代碼（1:managers，2:hourly workers ，3:com-mission workers，4:pieceworkers）：");
    scanf("%d", &payCode);

    switch (payCode) {
        case 1:
            double fixedSalary;
            printf("輸入經理的每周固定薪水：");
            scanf("%lf", &fixedSalary);
            weeklyPay = fixedSalary;
            break;
        case 2: 
            double hourlyWage;
            int hoursWorked;
            printf("輸入每小時工資：");
            scanf("%lf", &hourlyWage);
            printf("輸入工作的小時數：");
            scanf("%d", &hoursWorked);
            if (hoursWorked <= 40) {
                weeklyPay = hourlyWage * hoursWorked;
            } else {
                weeklyPay = (40 * hourlyWage) + ((hoursWorked - 40) * 1.5 * hourlyWage);
            }
            break;
        case 3: 
            double grossSales;
            printf("輸入每周總銷售額：");
            scanf("%lf", &grossSales);
            weeklyPay = 250 + (0.057 * grossSales);
            break;
        case 4: 
            double pieceRate;
            int piecesProduced;
            printf("輸入每件工作的報酬：");
            scanf("%lf", &pieceRate);
            printf("輸入生產的件數：");
            scanf("%d", &piecesProduced);
            weeklyPay = pieceRate * piecesProduced;
            break;
        default:
            printf("無效的工資代碼。\n");
            return 1;
    }

    printf("每周工資：$%lf\n", weeklyPay);
    return 0;
}

