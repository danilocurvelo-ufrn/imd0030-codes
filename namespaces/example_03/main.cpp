#include "circulo.h"
#include <algorithm>

namespace matematica {
    int max(int a, int b) { return (a >= b) ? a : b; }
    int min(int a, int b) { return (a <= b) ? a : b; }
}

int main() {
    geometria::Circulo c1(1.2);
    matematica::max(1, 2);
    std::max(1, 2);
    max(1, 2); // erro: undefined
    return 0;
}