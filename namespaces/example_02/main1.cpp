#include <iostream>
#include <algorithm>

int main() {
    int x, y;
    std::cin >> x >> y;
    std::cout << std::max(x, y) << std::endl;
    std::cout << std::min(x, y) << std::endl;
    return 0;
}
