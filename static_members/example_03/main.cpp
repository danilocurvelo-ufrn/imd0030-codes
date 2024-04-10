#include <iostream>

class Something {

    private:
        static int m_staticValue;

    public:
        static int getValue();
        static void setValue(int newValue);

};

int Something::m_staticValue = 1; 

int Something::getValue() {
    return m_staticValue;
}

void Something::setValue(int newValue) {
    m_staticValue = newValue;
}

int main() {

    Something first;
    Something second;

    std::cout << first.getValue() << '\n';
    std::cout << second.getValue() << '\n';

    first.setValue(2);

    std::cout << first.getValue() << '\n';
    std::cout << second.getValue() << '\n';

    Something::setValue(3);
    std::cout << Something::getValue() << '\n';

    return 0;
}