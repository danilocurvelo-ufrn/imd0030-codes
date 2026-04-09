int contarNos(Node* raiz) {
    if (raiz == nullptr)
        return 0;

    return 1 + contarNos(raiz->esquerda)
             + contarNos(raiz->direita);
}