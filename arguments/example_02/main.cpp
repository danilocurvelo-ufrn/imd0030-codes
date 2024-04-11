#include <iostream>

int incrementarPorValor(int valor) {
    valor++;
    return valor;
}

int main() {
    int var1 = 1;
    int var2 = incrementarPorValor(var1);
    std::cout << "O valor de var1 = " << var1 << std::endl;
    std::cout << "O valor de var2 = " << var2 << std::endl;
}