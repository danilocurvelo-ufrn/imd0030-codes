#include <iostream>
#include <string>
#include <set>

int main() {
    std::set<std::string> frutas;         // Criacao de um conjunto de strings vazio
    frutas.insert("banana");    // Insercao de elementos no conjunto
    frutas.insert("morango");
    frutas.insert("abacaxi");

    std::set<std::string>::iterator it = frutas.find("morango");   // Busca por elemento no conjunto
    if (it != frutas.end()) {
        std::cout << "Elemento encontrado" << std::endl;
    } else {
        std::cout << "Elemento nao encontrado" << std::endl;
    }

    return 0;
}

