#include <iostream>
#include "parnomeado.h"

int main() {
    // Objeto representando um par ordenado 
    // de inteiros com nome "Meu par"
    ParNomeado<int> p("Meu par", 1, 2);
    
    std::cout << "Primeiro elemento: " << p.getPrimeiro() << std::endl;
    std::cout << "Segundo elemento: " << p.getSegundo() << std::endl;
    
    return 0;
}
