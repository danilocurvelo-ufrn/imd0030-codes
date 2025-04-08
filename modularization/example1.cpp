#include <iostream>

int main() {
    int a, b;
    char op;
    
    std::cout << "Enter first number: ";
    std::cin >> a;

    std::cout << "Enter second number: ";
    std::cin >> b;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    if (op == '+') {
        std::cout << "Result: " << a + b << std::endl;
    } else if (op == '-') {
        std::cout << "Result: " << a - b << std::endl;
    } else if (op == '*') {
        std::cout << "Result: " << a * b << std::endl;
    } else if (op == '/') {
        if (b != 0)
            std::cout << "Result: " << a / b << std::endl;
        else
            std::cout << "Cannot divide by zero." << std::endl;
    } else {
        std::cout << "Invalid operator." << std::endl;
    }

    return 0;
}
