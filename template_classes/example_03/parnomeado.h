#include <iostream>
#include "par.h"

template<class U>
class ParNomeado {
    private:
        std::string nome;
        Par<U> elementos;
    public:
        ParNomeado(std::string n, U a, U b);
        U getPrimeiro();
        U getSegundo();
};

template<class U>
ParNomeado<U>::ParNomeado(std::string n, U a, U b)
    : nome(n), elementos(a, b) 
{
    // Corpo vazio
}

template<class U>
U ParNomeado<U>::getPrimeiro() {
    return elementos.getPrimeiro();
}

template<class U>
U ParNomeado<U>::getSegundo() {
    return elementos.getSegundo();
}
