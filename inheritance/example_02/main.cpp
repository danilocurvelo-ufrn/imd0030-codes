#include "carro.h"

int main() {
    Carro c;
    c.setModelo("Toyota Corolla"); // método da classe base Veiculo
    c.setPlaca("ABC-1234"); // método da classe base Veiculo
    c.setVolumePortaMalas(22.50); // método da classe derivada Carro
    c.ligar(); // método da classe base sobrescrito pela classe derivada

    return 0;
}
