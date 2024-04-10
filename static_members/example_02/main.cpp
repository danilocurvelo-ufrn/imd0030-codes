#include <iostream>

class Something {

    public:
        static int staticValue;

};

int Something::staticValue = 1; // definição da variável

int main() {

    Something first;
    Something second;

    std::cout << first.staticValue << '\n';
    std::cout << second.staticValue << '\n';

    first.staticValue = 2;

    std::cout << first.staticValue << '\n';
    std::cout << second.staticValue << '\n';

    std::cout << Something::staticValue << '\n';

    return 0;
}