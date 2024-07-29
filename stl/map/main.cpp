#include <iostream>
#include <map>
#include <string>
#include <utility>

int main() {
    std::map<int, std::string> alunos;     // Cria mapa vazio com chaves int e valores string

    alunos[20241] = "Maria";     // Insercao de valor com chave 20241
    alunos[20242] = "João";      // Insercao de valor com chave 20242
    alunos[20243] = "Ana";       // Insercao de valor com chave 20243

    alunos.erase(20242);         // Remocao de valor com chave 20242

    std::cout << "Aluno com matricula 20241: " << alunos[20241] << std::endl;

    std::map<int, std::string>::iterator it;
    for (it = alunos.begin(); it != alunos.end(); ++it)     // Impressao dos valores do mapa
        std::cout << it->first << " - " << it->second << std::endl;

    return 0;
}
