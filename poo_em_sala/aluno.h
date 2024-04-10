#ifndef ALUNO_H
#define ALUNO_H

#include <string>
#include <iostream>

class Aluno {

    private:
        std::string _matricula;
        std::string _nome;

    public:
        void setNome(std::string newNome);
        std::string getNome();

        void setMatricula(std::string newMatricula);
        std::string getMatricula();

        void printAlunoInfo();

};

#endif