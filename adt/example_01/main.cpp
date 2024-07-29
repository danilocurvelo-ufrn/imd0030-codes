#include "pilha.h"
#include <iostream>

int main() {
    Pilha<int> pilha;
    std::cout << "Tamanho: " << pilha.size() << std::endl;
    pilha.push(10);
    pilha.push(15);
    pilha.push(20);
    std::cout << pilha.top() << std::endl;
    pilha.pop();
    std::cout << "Tamanho: " << pilha.size() << std::endl;
    std::cout << pilha.top() << std::endl;
    pilha.pop();
    std::cout << pilha.top() << std::endl;
    pilha.pop();
    Pilha<std::string> pilha4;
    pilha4.push("Ana");
    pilha4.push("Maria");
    pilha4.push("Joao");
    std::cout << pilha4.top() << std::endl;
    pilha4.pop();
    std::cout << pilha4.top() << std::endl;
    pilha4.pop();
    std::cout << pilha4.top() << std::endl;
    pilha4.pop();
}
