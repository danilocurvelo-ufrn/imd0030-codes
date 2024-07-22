#include <iostream>

class Caminhao {
    std::string cor;
    std::string modelo;
    std::string ano;
    std::string placa;
    Pessoa proprietario;
    double capacidadeKg;
    int qtdeEixos;
    void ligar();
    void andar();
    void parar();
};
