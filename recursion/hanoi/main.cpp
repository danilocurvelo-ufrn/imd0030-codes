#include <iostream>

void towerOfHanoi(int numDisco, char origem, char destino, char auxiliar) {

    if (numDisco == 0) {
        return;
    }

    towerOfHanoi(numDisco-1, origem, auxiliar, destino);
    std::cout << "Mova o disco de " << origem << " para " << destino << std::endl;
    towerOfHanoi(numDisco-1, auxiliar, destino, origem);

}


int main() {
    int nDiscos = 0;
    std::cout << "Entre com o número de discos para resolver a torre de Hanoi (A, B, C): ";
    std::cin >> nDiscos;

    towerOfHanoi(nDiscos, 'A', 'C', 'B');
}