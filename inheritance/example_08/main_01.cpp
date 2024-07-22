#include <string>
#include "pessoa.h"

class Veiculo {
    protected:
        std::string cor;
        std::string modelo;
        std::string ano;
        std::string placa;
        Pessoa proprietario;
};

class BemMovel {
    protected:
        float preco;
        std::string codReceita;
};

class Carro : public Veiculo, BemMovel {
    protected:
        std::string classificacao;
    public:
        // metodos da classe
};
