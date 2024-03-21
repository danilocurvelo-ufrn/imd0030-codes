#include <iostream>

int fibonacci(int n) {

    if ( (n == 0) || (n == 1) ) {
        return n;
    } else {
        return ( fibonacci(n - 1) + fibonacci(n - 2) );
    }

}

int main() {

    int n;
    std::cout << "Entre com o valor de N: ";
    std::cin >> n; 

    int i = 0;
    while (i < n) {
        std::cout << fibonacci(i) << " ";
        i++;
    }

    return 0;

}