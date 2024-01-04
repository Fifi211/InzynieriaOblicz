#include "funkcje.h"
#include <cmath>

double CalculatorFunctions::naturalLogarithm(double x) {
    return log(x);
}

double CalculatorFunctions::standardDeviation(double x1, double x2, double x3, double x4, double x5) {
    double mean = calculateMean(x1, x2, x3, x4, x5);
    double sumSquaredDifferences = 0.0;

    sumSquaredDifferences += pow(x1 - mean, 2);
    sumSquaredDifferences += pow(x2 - mean, 2);
    sumSquaredDifferences += pow(x3 - mean, 2);
    sumSquaredDifferences += pow(x4 - mean, 2);
    sumSquaredDifferences += pow(x5 - mean, 2);

    return sqrt(sumSquaredDifferences / 5);
}

double CalculatorFunctions::exponentValue(double x) {
    return exp(x);
}

double CalculatorFunctions::calculateMean(double x1, double x2, double x3, double x4, double x5) {
    return (x1 + x2 + x3 + x4 + x5) / 5.0;
}
