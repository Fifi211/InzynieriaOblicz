#include <iostream>
#include "funkcje.h"

int main() {
    CalculatorFunctions calculator;

    double logResult = calculator.naturalLogarithm(2.0);
    std::cout << "Natural Logarithm: " << logResult << std::endl;

    double stdDeviation = calculator.standardDeviation(1.0, 2.0, 3.0, 4.0, 5.0);
    std::cout << "Standard Deviation: " << stdDeviation << std::endl;

    double exponentResult = calculator.exponentValue(3.0);
    std::cout << "Exponent Value: " << exponentResult << std::endl;

    return 0;
}
