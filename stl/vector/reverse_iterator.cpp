#include <vector>

int main() {
    std::vector<int> codigos;               // Vetor de inteiros
    std::vector<int>::reverse_iterator itr; // Iterador reverso sobre o vetor de inteiros
    for (itr = codigos.rbegin(); itr != codigos.rend(); ++itr) {
        // Iteracao sobre os elementos do vetor utilizando o iterador itr
    }

    return 0;
}
