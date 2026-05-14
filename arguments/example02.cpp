#include <iostream>

void incrementar(int x) {
    x++;
}

int main() {

    int a = 10;

    incrementar(a);

    std::cout << a;
}