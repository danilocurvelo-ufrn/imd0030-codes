#include <iostream>

// fib(1) = 1
// fib(2) = 1
// fib(n) = fib(n-1) + fib(n-2)

int contador = 0;

int fibonacci(int n) {

    contador++;

    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }

}

int main() {
    std::cout << fibonacci(30) << std::endl;
    std::cout << contador << std::endl;
}