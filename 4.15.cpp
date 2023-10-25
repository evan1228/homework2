#include <iostream>
#include <cmath>

int main() {
    double principal = 5000.0;
    int years = 15;

    // 不同年利率
    double interest_rates[] = {0.10, 0.105, 0.11, 0.115, 0.12};
    int num_rates = sizeof(interest_rates) / sizeof(interest_rates[0]);

    for (int i = 0; i < num_rates; i++) {
        double future_value = principal * std::pow(1 + interest_rates[i], years);
        std::cout << "年利率 " << (interest_rates[i] * 100) << "% 的: " << future_value << "元" << std::endl;
    }

    return 0;
}

