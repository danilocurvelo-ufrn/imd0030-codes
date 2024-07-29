#include <iostream>
#include <deque>

int main() {
    std::deque<int> d;                                 // Criacao de uma fila vazia de strings
    for (int i = 5; i >= 0; i--) d.push_front(i); // Insercao de elementos no inicio (0-5)
    for (int i = 6; i <= 11; i++) d.push_back(i); // Insercao de elementos no final (6-11)
    
    d.pop_back();                                 // Remocao do ultimo elemento do deque
    d.pop_front();                                // Remocao do primeiro elemento do deque
    
    std::deque<int>::iterator it;
    for (it = d.begin(); it != d.end(); ++it) {   // Iterador sobre o deque
        std::cout << *it << " ";                       // Impressao dos elementos do deque
    }

    return 0;
}
