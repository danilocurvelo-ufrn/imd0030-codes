#include <iostream>

int collatz(int n) {

    std::cout << n << " ";

    if (n == 1) {
        return 0;
    } else if ( n%2 == 0 ) { // é par
        return 1 + collatz(n/2);
    } else { // é ímpar
        return 1 + collatz((3*n)+1);
    }
}

int main() {
    int n;
    std::cin >> n;
    int steps = collatz(n);
    std::cout << "\nQuant. de passos: " << steps << std::endl;
}