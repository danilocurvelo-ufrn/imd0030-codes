#include <iostream>

int add(int x, int y); // necessário para que main2.cpp saiba que add() é uma função definida em outro lugar

int main() {
    std::cout << "A soma de 3 e 4 é: " << add(3, 4) << '\n';
    return 0;
}