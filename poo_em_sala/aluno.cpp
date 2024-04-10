#include "aluno.h"

void Aluno::setNome(std::string newNome) {
    _nome = newNome;
}

std::string Aluno::getNome() {
    return _nome;
}

void Aluno::setMatricula(std::string newMatricula) {
    _matricula = newMatricula;
}

std::string Aluno::getMatricula() {
    return _matricula;
}

void Aluno::printAlunoInfo() {
    std::cout << "Nome: " << _nome << " / Matrícula: " << _matricula << std::endl;
}