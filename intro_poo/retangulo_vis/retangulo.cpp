#include "retangulo.h"

int Retangulo::area() {
    return largura * altura;
}

int Retangulo::perimetro() {
    return (2 * largura + 2 * altura);
}