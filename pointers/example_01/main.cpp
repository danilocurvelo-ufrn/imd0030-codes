#include <iostream>

int incrementarPorValor(int valor) {
    valor++;
    return valor;
}

int incrementarPorReferencia(int &valor) {
    valor++;
    return valor;
}

int incrementarPorPonteiros(int *valor) {
    *valor += 1;
    return *valor;
}

int main() {

    // PONTEIROS
    // Um ponteiro é uma variável que contém o endereço de memória de outra variável.
    // Pode ser desreferenciado com a ajuda do operador '*' para acessar o local da memória para o qual o ponteiro aponta.

    std::cout << std::endl << "CASO 1" << std::endl;

    int var1 = 10; // inicializando uma variável chamada var1
    int *ptr1;
    ptr1 = &var1; //  atribuindo o endereço de var1 em ptr1
    std::cout << "O valor de ptr1 = " << ptr1 << std::endl;
    std::cout << "O valor de var1 = " << *ptr1 << std::endl;

    // VARIÁVEL DE REFERÊNCIA
    // Uma variável de referência é um alias, ou seja, outro nome para uma variável já existente.
    // Uma referência é semelhante a um ponteiro. Em muitos casos, uma referência pode ser usada como alternativa ao ponteiro, em particular, para o parâmetro da função.

    std::cout << std::endl << "CASO 2" << std::endl;

    int var2 = 10; // inicializando uma variável chamada var2
    int &ref2 = var2; // criando uma variável de referência para var2
    std::cout << "O valor de var2 = " << ref2 << std::endl;

    var2 = 20;
    std::cout << "O valor de var2 = " << ref2 << std::endl;

    // Caso de uso: passagem por valor e passagem por referência para funções

    std::cout << std::endl << "CASO 3" << std::endl;

    int var3 = 1;
    int var4 = incrementarPorValor(var3);
    std::cout << "O valor de var3 = " << var3 << std::endl;
    std::cout << "O valor de var4 = " << var4 << std::endl;

    std::cout << std::endl << "CASO 4" << std::endl;

    int var5 = 1;
    int var6 = incrementarPorReferencia(var5);
    std::cout << "O valor de var5 = " << var5 << std::endl;
    std::cout << "O valor de var6 = " << var6 << std::endl;

    std::cout << std::endl << "CASO 5" << std::endl;

    int var7 = 1;
    int var8 = incrementarPorPonteiros(&var7);
    std::cout << "O valor de var7 = " << var7 << std::endl;
    std::cout << "O valor de var8 = " << var8 << std::endl;


    // DIFERENÇAS
    // A declaração de referência e a inicialização devem acontecer ao mesmo tempo, enquanto a declaração e a inicialização do ponteiro podem acontecer separadamente.
    // A referência não pode ser declarada como NULL, enquanto um ponteiro pode ser declarado como NULL.
    // Outra diferença importante é a reatribuição. Embora um valor de ponteiro possa ser reatribuído, o mesmo não vale para uma referência. Ou seja, uma referência não pode ser reatribuída e torna-se fixa assim que é atribuída a uma variável.

    // QUANDO USAR?

    // Use referências em C++:
        // Nos parâmetros de função e tipo de retorno

    // Use ponteiro:
        // Na implementação da estrutura de dados, como listas vinculadas, árvores, etc. Isso ocorre porque podemos ter que alterar o valor do ponteiro para onde ele está apontando.
        // Se for necessária aritmética do ponteiro ou a passagem de um ponteiro NULL.

    return 0;

}