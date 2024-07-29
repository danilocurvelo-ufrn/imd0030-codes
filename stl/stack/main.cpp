#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;                       // Criacao de uma pilha vazia de inteiros
    for (int i = 1; i <= 5; i++) {
       s.push(i);                       // Insercao de elementos na pilha
    }

    std::cout << "Elementos da pilha: ";
    while (!s.empty()) {
       std::cout << s.top() << " ";          // Impressao do elemento que esta no topo da pilha
       s.pop();                         // Remocao do elemento que esta no topo da pilha
    }

    return 0;
}
