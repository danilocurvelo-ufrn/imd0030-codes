#include "aluno.h"
#include "turma.h"

#include <iostream>

int main() {

    Aluno a;
    a.setNome("João");
    a.setMatricula("11111");

    Aluno b;
    b.setNome("Maria");
    b.setMatricula("22222");

    Aluno c;
    c.setNome("Carlos");
    c.setMatricula("33333");

    Aluno* d = new Aluno();
    d->setNome("Alice");
    d->setMatricula("4444");

    // a.printAlunoInfo();
    // b.printAlunoInfo();
    // c.printAlunoInfo();
    // d->printAlunoInfo();

    Turma lp1;
    lp1.setNome("Linguagem de Programação I");
    lp1.setCodigo("IMD0030");

    lp1.addAluno(a);
    lp1.addAluno(b);
    lp1.addAluno(c);

    lp1.printTurmaInfo();

    lp1.removeAluno("22222");

    lp1.printTurmaInfo();

    return 0;

}