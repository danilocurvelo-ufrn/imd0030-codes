#include <fstream>
#include <iostream>
#include <string>

int main() {
    // ifstream é utilizado para ler arquivos
    // Vamos ler um arquivo chamado exemplo.txt
    std::ifstream inf("exemplo.txt");

    // Verifica se o arquivo não pode ser aberto para leitura
    if (!inf) {
        // Imprime erro e sai do programa
        std::cerr << "Oops! exemplo.txt não pode ser aberto para leitura!\n";
        return 1;
    }

    std::string strInput;
    while (std::getline(inf, strInput)) {
        std::cout << strInput << '\n';
    }

    return 0;
}