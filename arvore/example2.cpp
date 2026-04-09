#include <iostream>

struct Node {
    int valor;
    Node* esquerda;
    Node* direita;
};

void inOrder(Node* raiz) {
   stack<Node*> s;
   Node* atual = raiz;

   while (atual != nullptr || !s.empty()) {
       while (atual != nullptr) {
           s.push(atual);
           atual = atual->esquerda;
       }

       atual = s.top();
       s.pop();

       std::cout << atual->valor << " ";

       atual = atual->direita;
   }
}
