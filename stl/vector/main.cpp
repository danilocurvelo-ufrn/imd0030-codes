#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;                            // Vetor de inteiros vazio
    for (int i = 1; i <= 10; i++) v.push_back(i);  // Insercao de elementos no vetor

    for (int i = 0; i < (int)v.size(); i++) {      // Iteracao sobre os elementos do vetor
       std::cout << v[i] << " ";                   // Acesso ao elemento indicado
    }

    return 0;
}
