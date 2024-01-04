#include "pch.h"
#include "../Kalkulator/funkcje.cpp"  // Uwaga: œcie¿ka do pliku funkcje.cpp w projekcie kalkulatora
#include "gtest/gtest.h"

TEST(CalculatorTests, NaturalLogarithm) {
    CalculatorFunctions calculator;
    EXPECT_DOUBLE_EQ(0.0, calculator.naturalLogarithm(1.0));
    EXPECT_DOUBLE_EQ(1.60943, calculator.naturalLogarithm(5.0));
    // Dodaj wiêcej testów
}

TEST(CalculatorTests, StandardDeviation) {
    CalculatorFunctions calculator;
    EXPECT_DOUBLE_EQ(0.0, calculator.standardDeviation(1.0, 1.0, 1.0, 1.0, 1.0));
    EXPECT_DOUBLE_EQ(1.41421, calculator.standardDeviation(1.0, 2.0, 3.0, 4.0, 5.0));
    // Dodaj wiêcej testów
}

TEST(CalculatorTests, ExponentValue) {
    CalculatorFunctions calculator;
    EXPECT_DOUBLE_EQ(1.0, calculator.exponentValue(0.0));
    EXPECT_DOUBLE_EQ(148.413, calculator.exponentValue(5.0));
    // Dodaj wiêcej testów
}
