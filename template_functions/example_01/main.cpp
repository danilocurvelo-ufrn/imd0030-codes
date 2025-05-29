#include <iostream>

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {

    char a = max('a', '1'); 
    int b = max(58, 15);
    float c = max(17.2f, 5.46f);
    double d = max(25.7, 62.3);

    // Se quisermos forçar o uso de um tipo específico, podemos explicitá-lo
    double e = max<double>(41, 52.46); // passagem explícita
    char f = max<char>(97, 98); // passagem explícita

    max(3.2f, 3); // error: no matching function for call to ‘max(float, int), sem dedução
    max<int>(3.2f, 3); // OK!

    return 0;
}