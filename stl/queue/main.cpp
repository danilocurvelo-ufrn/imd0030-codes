#include <iostream>
#include <string>
#include <queue>

int main() {
   std::queue<std::string> q;                    // Criacao de uma fila vazia de strings
   q.push("Roberto");                  // Insercao de elementos na fila
   q.push("Antonio");
   std::cout << "Elementos da fila: ";
   while (!q.empty()) {
      std::cout << q.front() << " ";        // Impressao do primeiro elemento da fila
      q.pop();                         // Remocao do primeiro elemento da fila
   }

   return 0;
}
