#include "retangulo_mod.h"

int Retangulo::area() {
    return largura * altura;
}

int Retangulo::perimetro() {
    return (2 * largura + 2 * altura);
}

int main() {
    Retangulo* r = new Retangulo();

    return 0;
}
