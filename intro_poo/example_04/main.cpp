#include <iostream>
#include "retangulo.h"

int main() {
    Retangulo r;
    r.largura = 10;
    r.altura = 5;

    std:: cout << "Largura: " << r.largura << 
                  " e Altura: " << r.altura << std::endl;

    return 0;
}