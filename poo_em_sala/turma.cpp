#include "turma.h"

std::string Turma::getCodigo() {
    return _codigo;
}

void Turma::setCodigo(std::string codigo) {
    _codigo = codigo;
}

std::string Turma::getNome() {
    return _nome;
}

void Turma::setNome(std::string nome) {
    _nome = nome;
}

void Turma::addAluno(Aluno aluno) {
    _alunos[_quantAlunos] = aluno;
    _quantAlunos++;
}

void Turma::removeAluno(std::string matricula) {

    bool jaRemovido = false;

    for (int i = 0; i < _quantAlunos; i++) {

        if (jaRemovido) {
            _alunos[i-1] = _alunos[i];
        }

        if (_alunos[i].getMatricula() == matricula) {
            jaRemovido = true;
            _quantAlunos--;
        }
    }
}

void Turma::printTurmaInfo() {

	std::cout << "Componente: " << _nome << " Turma: " << _codigo << std::endl;
	std::cout << "Total de Alunos: " << _quantAlunos << std::endl;

    for (int i = 0; i < _quantAlunos; i++) {
        std::cout << _alunos[i].getMatricula() << " " << _alunos[i].getNome() << std::endl;
    }

    std::cout << std::endl << std::endl;
    
}