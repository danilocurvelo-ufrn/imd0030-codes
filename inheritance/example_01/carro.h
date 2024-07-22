#include <iostream>

class Carro {
    std::string cor;
    std::string modelo;
    std::string ano;
    std::string placa;
    Pessoa proprietario;
    void ligar();
    void andar();
    void parar();
};