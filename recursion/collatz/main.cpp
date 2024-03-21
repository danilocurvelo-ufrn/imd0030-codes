#include <iostream>

int collatz(int n) {

    std::cout << n << " ";

    if (n == 1) {
        std::cout << std::endl;
        return 0;
    }

    if (n % 2 == 0) {
        return 1 + collatz(n/2);
    } else {
        return 1 + collatz( (3*n) + 1);
    }

}

int main() {
    int n;
    std::cout << "Entre com o valor de N: ";
    std::cin >> n; 

    int steps = collatz(n);
    std::cout << "Passos para collatz(" << n << ") = " << steps << std::endl;
}