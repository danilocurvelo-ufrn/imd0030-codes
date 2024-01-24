#include <iostream>

#include "conv.h"

int main() {
    int opcao;
    std::cout << "Conversor de temperatura" << std::endl;
    std::cout << "(1) Celsius -> Fahrenheit" << std::endl;
    std::cout << "(2) Fahrenheit -> Celsius" << std::endl;
    std::cout << "Digite sua opcao: ";
    std::cin >> opcao;
    
    float temp; 
    std::cout << "Digite a temperatura: ";
    std::cin >> temp;
    float conv;

    switch(opcao) {
        case 1:		
            conv = celsius2fahrenheit(temp);
            std::cout << temp << "ºC = " << conv << "ºF" << std::endl;
            break;
        case 2:
            conv = fahrenheit2celsius(temp);
            std::cout << temp << "ºF = " << conv << "ºC" << std::endl;
            break;
        default:
            std::cout << "Opcao invalida" << std::endl;
    }
    return 0;
}