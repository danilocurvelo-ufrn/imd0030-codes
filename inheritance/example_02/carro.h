#include <iostream>
#include "veiculo.h"

class Carro : public Veiculo {
    private:
        double volumePortaMalas;
    public:
        std::string getVolumePortaMalas();
        void setVolumePortaMalas(double v);
        void ligar();
        void andar();
        void parar();      
};

void Carro::ligar() {
    std::cout << "Carro foi ligado" << std::endl;
}