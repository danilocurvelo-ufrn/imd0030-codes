#include <iostream>
#include "par.h"

int main() {
    Par<int> p(1, 2); // Objeto representando um par ordenado de inteiros
    
    std::cout << "Primeiro elemento: " << p.getPrimeiro() << std::endl;
    std::cout << "Segundo elemento: " << p.getSegundo() << std::endl;
    
    return 0;
}
