#include <iostream>

class Veiculo
{
public:
    int velocidade;

protected:
    std::string tipoMotor;

private:
    std::string numeroChassi; // Não acessível diretamente por Carro
public:
    Veiculo(int v, std::string tm, std::string nc) : velocidade(v), tipoMotor(tm), numeroChassi(nc) {}
    void acelerar() { std::cout << "Veículo acelerando." << std::endl; }
    std::string getNumeroChassi() { return numeroChassi; } // Método público para acessar privado
};

class Carro : public Veiculo
{ // Herança pública
public:
    int numPortas;
    Carro(int v, std::string tm, std::string nc, int np) : Veiculo(v, tm, nc), numPortas(np) {}
    void exibirInfo()
    {
        std::cout << "Velocidade: " << velocidade << " km/h" << std::endl; // public herdado
        std::cout << "Tipo de Motor: " << tipoMotor << std::endl;          // protected herdado
        // std::cout << numeroChassi << std::endl; // ERRO: private da base
        std::cout << "Chassi: " << getNumeroChassi() << std::endl; // Acessa via método público
        std::cout << "Portas: " << numPortas << std::endl;
    }
};
