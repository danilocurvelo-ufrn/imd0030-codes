#include <algorithm>
#include <iostream>
#include <vector>

void imprime(std::vector<int> v) {            // Funcao para imprimir os elementos de um vetor
   std::vector<int>::iterator i;
   for (i = v.begin(); i != v.end(); ++i) {
      std::cout << *i << " ";
   }
   std::cout << std::endl;
}

int main() {
    std::vector<int> numeros;                              // Vetor de inteiros vazio
    for (int i = 1; i <= 10; i++) numeros.push_back(i);    // Insercao de elementos no vetor

    std::reverse(numeros.begin(), numeros.end());          // Inverte a ordem dos elementos
    imprime(numeros);

    std::random_shuffle(numeros.begin(), numeros.end());   // Reordena aleatoriamente os elementos
    imprime(numeros);

    std::replace(numeros.begin(), numeros.end(), 10, 100); // Substitui a ocorrência de um valor
    imprime(numeros);

    std::fill(numeros.begin(), numeros.end(), 0);          // Preenche todos os elementos do vetor com 0
    imprime(numeros);

    return 0;
}