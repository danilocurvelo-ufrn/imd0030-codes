#include <iostream>
#include "retangulo.h"

int main() {
    Retangulo r(10, 5);
    std::cout << "Quantidade de instâncias: " << Retangulo::getTotal() << std::endl;

    Retangulo q(8, 3);
    std::cout << "Quantidade de instâncias: " << Retangulo::getTotal() << std::endl;

    return 0;
}
