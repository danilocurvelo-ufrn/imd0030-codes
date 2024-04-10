#include <iostream>
#include "retangulo.h"

int main() {
    Retangulo r(10, 5);
    std::cout << "Largura = " << r.getLargura() << std::endl;
    std::cout << "Altura = " << r.getAltura() << std::endl;

    Retangulo q(r);
    std::cout << "Largura = " << q.getLargura() << std::endl;
    std::cout << "Altura = " << q.getAltura() << std::endl;

    return 0;
}
