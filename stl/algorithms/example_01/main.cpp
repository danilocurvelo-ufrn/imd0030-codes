#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void imprime(std::string nome) { 
   std::cout << nome << " ";
}

int main() {
    // Vetor de strings com quatro elementos (exclusivamente em C++11)
    std::vector<std::string> nomes = { "Maria", "Joao", "Mauricio", "Joao" };

    // Conta o numero de ocorrencias de "Joao" no vetor
    int ocorrencias = std::count(nomes.begin(), nomes.end(), "Joao");
    std::cout << "Foram encontradas " << ocorrencias << " ocorrencias no vetor" << std::endl;

    // Encontra a primeira ocorrência de "Joao" no vetor
    std::vector<std::string>::iterator it = std::find(nomes.begin(), nomes.end(), "Joao");
    if (it == nomes.end()) {
       std::cout << "String nao encontrada" << std::endl;
    }

    // Chama a funcao imprime para cada elemento do vetor
    std::for_each(nomes.begin(), nomes.end(), imprime);

    return 0;
}
