#include <iostream>
#include <list>

int main() {
    std::list<int> l;                        // Criacao de uma lista vazia de inteiros
    l.push_front(1);                    // Insercao de elemento no inicio da lista
    l.push_back(2);                     // Insercao de elemento no final da lista

    std::list<int>::iterator it = l.begin(); // Iterador aponta para o inicio da lista
    l.insert(it, 0);                    // Insercao de elemento na posicao do iterador

    for (it = l.begin(); it != l.end(); ++it)  // Iteracao sobre a lista usando o iterador
       std::cout << *it << " ";                // Impressao do elemento apontado por iterador

    return 0;
}
