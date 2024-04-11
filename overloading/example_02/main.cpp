#include <iostream>

float somar ( int x, float y) { return (float) x + y; }
float somar ( float x, int y) { return x * (float) y; }

int main () {
    std::cout << somar( 2, 4.1f) << std::endl;
    std::cout << somar( 2.1f, 4) << std::endl;
    return 0;
}
