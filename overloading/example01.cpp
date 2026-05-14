#include <iostream>

int somar(int x, int y) {
    return x + y;
}

float somar(float x, float y) {
    return x + y;
}

double somar(double x, double y) {
    return x + y;
}

int main() {

    std::cout << somar(1, 2) << '\n';

    std::cout << somar(1.5f, 2.5f) << '\n';

    std::cout << somar(5.0, 3.0) << '\n';

    return 0;
}