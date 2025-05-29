#include <iostream>

template <typename T>
class No {
public:
    T valor;
    No* proximo;

    No(T val) : valor(val), proximo(NULL) {}
};

template <typename T>
class ListaEncadeada {
private:
    No<T>* cabeca;
public:
    ListaEncadeada() : cabeca(NULL) {}

    void inserir(T val) {
        No<T>* novo = new No<T>(val);
        novo->proximo = cabeca;
        cabeca = novo;
    }

    void exibir() const {
        No<T>* atual = cabeca;
        while (atual) {
            std::cout << atual->valor << " -> ";
            atual = atual->proximo;
        }
        std::cout << "NULL" << std::endl;
    }

    ~ListaEncadeada() {
        while (cabeca) {
            No<T>* temp = cabeca;
            cabeca = cabeca->proximo;
            delete temp;
        }
    }
};