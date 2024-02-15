#include <iostream>

int fat(int n)
{
    if (n == 0)
    {
        return 1;
    }

    else
    {
        return n * fat(n - 1);
    }
}

int main() {
    int n;
    n = fat(n);
    std::cout << "Fatorial de: ";
    std::cin >> n;
    std::cout << "fat(" << n << ") = " << fat(n) << std::endl;
}
