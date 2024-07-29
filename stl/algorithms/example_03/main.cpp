#include <algorithm>
#include <iostream>
#include <vector>

void imprime(std::vector<int> v) {            // Funcao para imprimir os elementos de um vetor
   std::vector<int>::iterator i;
   for (i = v.begin(); i != v.end(); ++i) std::cout << *i << " ";
   std::cout << std::endl;
}

int main() {

   std::vector<int> numeros = { 12, 5, 21, 23, 44, 38 }; 

   // Retorna um iterador para o primeiro elemento com maior valor no vetor
   std::vector<int>::iterator it = std::max_element(numeros.begin(), numeros.end());
   std::cout << "Maior valor no vetor: " << *it << std::endl;

   // Ordena os tres primeiros elementos do vetor
   std::sort(numeros.begin(), numeros.begin()+3);
   imprime(numeros);
   
   // Ordena todo o vetor e realiza uma busca binaria pelo valor 38
   std::sort(numeros.begin(), numeros.end());
   if (std::binary_search(numeros.begin(), numeros.end(), 38)) {
       std::cout << "Valor encontrado" << std::endl;
   } else {
       std::cout << "Valor nao encontrado" << std::endl;
   }

   return 0;
}

