#include <iostream>

double corrigirPoupanca ( double valorInicial, double taxa = 0.5) { 	
    return valorInicial * ( 1. + taxa / 100 ); 
}

int main () {
    // O segundo parâmetro recebe o valor padrão como argumento
    double valorCorrigido = corrigirPoupanca( 1000.);
    // O segundo parâmetro recebe um novo valor como argumento
    double valorCorrigido = corrigirPoupanca( 1000., 0.6);
    return 0;
}
