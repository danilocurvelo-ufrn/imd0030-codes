#include <iostream>

struct Node {
    int valor;
    Node* esquerda;
    Node* direita;
};

void inOrder(Node* raiz) {
    if (raiz) {
        inOrder(raiz->esquerda);
        std::cout << raiz->valor << " ";
        inOrder(raiz->direita);
    }
}

void preOrder(Node* raiz) {
    if (raiz) {
        std::cout << raiz->valor << " ";
        preOrder(raiz->esquerda);
        preOrder(raiz->direita);
    }
}

void postOrder(Node* raiz) {
    if (raiz) {
        postOrder(raiz->esquerda);
        postOrder(raiz->direita);
        std::cout << raiz->valor << " ";
    }
}
