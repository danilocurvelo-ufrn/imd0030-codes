#include <iostream>

int fat(int n)
{
    int product = 1;
    while (n > 0)
    {
        product *= n;
        n--;
    }
    return product;
}

int main() {
    int n;
    std::cout << "Fatorial de: ";
    std::cin >> n;
    std::cout << "fat(" << n << ") = " << fat(n) << std::endl;
}