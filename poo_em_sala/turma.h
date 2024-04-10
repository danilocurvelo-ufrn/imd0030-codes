#ifndef TURMA_H
#define TURMA_H

#include <string>
#include "aluno.h"

class Turma {

    private:
        std::string _codigo;
        std::string _nome;

        Aluno _alunos [40];
        int _quantAlunos = 0;

    public:
        void setCodigo(std::string codigo);
        std::string getCodigo();

        void setNome(std::string nome);
        std::string getNome();

        void addAluno(Aluno aluno);
        void removeAluno(std::string matricula);

        void printTurmaInfo();

};

#endif