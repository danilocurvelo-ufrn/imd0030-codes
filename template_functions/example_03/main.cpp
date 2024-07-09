#include <iostream>

template < typename T, typename U >
T divisao (T a, U b) {
    return a / b;
}

int main() {
    double a = divisao(52.68, 5);
    std::cout << a << std::endl;
    double b = divisao<double, int>(44.18, 10);
    std::cout << b << std::endl;
    return 0;
}