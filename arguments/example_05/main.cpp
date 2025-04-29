#include <iostream>

int& modify_value(int &num) {
    num = num * 2;
    return num;
}

int main() {
    int x = 10;
    int& ref_x = modify_value(x);

    std::cout << "Original value of x: " << x << std::endl;
    std::cout << "Value of x through reference: " << ref_x << std::endl;

    ref_x = 100;
    std::cout << "Modified value of x through reference: " << x << std::endl;
    return 0;
}