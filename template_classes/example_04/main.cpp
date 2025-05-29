#include "listaEncadeada.h"

int main() {
    ListaEncadeada<int> lista;
    lista.inserir(10);
    lista.inserir(20);
    lista.inserir(30);
    lista.exibir();

    ListaEncadeada<std::string> nomes;
    nomes.inserir("Alice");
    nomes.inserir("Bob");
    nomes.exibir();

    return 0;
}