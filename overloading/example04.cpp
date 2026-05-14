#include <iostream>

void print(int x) {
    std::cout << "int\n";
}

void print(double x) {
    std::cout << "double\n";
}

int main() {

    print(10);

    print(10.5);

    print('A');
}