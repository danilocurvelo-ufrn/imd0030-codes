#include <iostream>

int fat(int n) {
    return n ? (n * fat(n - 1)) : 1;
}

int main() {
    int n;
    n = fat(n);
    std::cout << "Fatorial de: ";
    std::cin >> n;
    std::cout << "fat(" << n << ") = " << fat(n) << std::endl;
}
