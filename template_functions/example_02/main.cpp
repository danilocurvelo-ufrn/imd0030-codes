#include <iostream>

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

template<>
std::string max(std::string a, std::string b) {
    return (a.length() > b.length()) ? a : b;
}

int main() {

    std::cout << max< std::string >("C++", "Python") << std::endl;

    return 0;
}