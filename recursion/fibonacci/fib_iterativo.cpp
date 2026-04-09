#include <iostream>

int fib_iter(int n) {
    if (n <= 1) return n;
    int a = 0, b = 1;

    for (int i = 2; i <= n; i++) {
        int temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main() {
    std::cout << fib_iter(30) << std::endl;
}