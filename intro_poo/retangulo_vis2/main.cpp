#include <iostream>
#include "retangulo.h"

int main() {
    Retangulo r;
    r.setLargura(10);
    r.setAltura(5);
    std::cout << "Largura = " << r.getLargura() << ", Altura = " << r.getAltura();

    return 0;
}
