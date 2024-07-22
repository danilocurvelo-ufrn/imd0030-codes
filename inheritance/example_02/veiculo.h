#include <string>
#include "pessoa.h"

class Veiculo {
    protected:
        std::string cor;
        std::string modelo;
        std::string ano;
        std::string placa;
        Pessoa proprietario;
    public:
        void ligar();
        void andar();
        void parar();
};
