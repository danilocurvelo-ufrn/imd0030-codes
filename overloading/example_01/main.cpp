#include <iostream>
int somar ( int x, int y, int z) { return x + y + z; }
int somar ( int x, int y) { return x + y; }
float somar ( float x, float y) { return x + y; }
double somar ( double x, double y) { return x + y; }

int main () {
    std::cout << somar( 3, 2, 1) << std::endl;
    std::cout << somar( 1, 2) << std::endl;
    std::cout << somar( 7.5f, 8.0f) << std::endl;
    std::cout << somar( 2.0, 3.5) << std::endl;
    return 0;
}
