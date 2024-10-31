#include <iostream>
#include "retangulo.h"

int main() {
    Retangulo r;
    std::cout << "Largura = " << r.getLargura() << std::endl;
    std::cout << "Altura = " << r.getAltura() << std::endl;

    Retangulo q(5);
    std::cout << "Largura = " << q.getLargura() << std::endl;
    std::cout << "Altura = " << q.getAltura() << std::endl;

    Retangulo s(5, 3);
    std::cout << "Largura = " << s.getLargura() << std::endl;
    std::cout << "Altura = " << s.getAltura() << std::endl;

    return 0;
}
