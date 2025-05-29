#include <iostream>

class Motor {
public:
    void ligar() { std::cout << "Motor ligado." << std::endl; }
    void desligar() { std::cout << "Motor desligado." << std::endl; }
};

class CarroComMotor : private Motor { // Herança privada
public:
    void iniciarCarro() {
        ligar(); // Método ligar() do Motor se tornou private em CarroComMotor,
                 // mas é acessível internamente.
        std::cout << "Carro pronto para dirigir." << std::endl;
    }
    void pararCarro() {
        desligar(); // Método desligar() do Motor se tornou private em CarroComMotor,
                    // mas é acessível internamente.
        std::cout << "Carro parado." << std::endl;
    }
};

int main() {
    CarroComMotor meuCarro;
    meuCarro.ligar(); // ERRO: ligar() é private para objetos de CarroComMotor
    meuCarro.iniciarCarro(); // OK
}
