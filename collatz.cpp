

#include <iostream>

int collatz(int n) {

    // Se n é 1, pare;
    // Caso contrário, se n é par, repita esse processo para n/2;
    // Caso contrário, se n é ímpar, repita esse processo para 3*n + 1;

    if (n == 1) {
        return 0;
    } else {
        if (n % 2 == 0) { // par
            return 1 + collatz(n/2);
        } else { // ímpar
            return 1 + collatz(3*n + 1);
        }
    }

}

int main() {
    std::cout << collatz(27) << std::endl;
}