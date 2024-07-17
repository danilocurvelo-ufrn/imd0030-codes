#include <fstream>
#include <iostream>

int main() {
    // ofstream é utilizado para escrever em arquivos
    // Vamos criar um arquivo chamado exemplo.txt
    std::ofstream outf("exemplo.txt");

    // Se não conseguirmos abrir o arquivo
    if (!outf) {
        // Imprime erro e sai do programa
        std::cerr << "Oops! exemplo.txt não pode ser aberto para escrita!\n";
        return 1;
    }

    // Vamos escrever duas linhsa neste arquivo
    outf << "Essa é a linha 1\n";
    outf << "Essa é a linha 2\n";

    return 0;
}