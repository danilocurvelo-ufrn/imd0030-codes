// calculator.cpp

#include <iostream>
#include "calculator.h"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b != 0)
        return static_cast<float>(a) / b;
    else {
        std::cout << "Error: Cannot divide by zero." << std::endl;
        return 0.0;
    }
}

void calculator() {
    int a, b;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> a;

    std::cout << "Enter second number: ";
    std::cin >> b;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    switch (op) {
        case '+':
            std::cout << "Result: " << add(a, b) << std::endl;
            break;
        case '-':
            std::cout << "Result: " << subtract(a, b) << std::endl;
            break;
        case '*':
            std::cout << "Result: " << multiply(a, b) << std::endl;
            break;
        case '/':
            std::cout << "Result: " << divide(a, b) << std::endl;
            break;
        default:
            std::cout << "Invalid operator." << std::endl;
    }
}
