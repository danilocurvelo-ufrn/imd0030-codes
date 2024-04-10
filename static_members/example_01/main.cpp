#include <iostream>

class Something {
    private: 
        int m_value;

    public:

        Something() {
            m_value = 1;
        }

        int getValue() {
            return m_value;
        }

        void setValue(int value) {
            m_value = value;
        }
};

int main()
{
    Something first;
    Something second;

    first.setValue(2);

    std::cout << first.getValue() << '\n';
    std::cout << second.getValue() << '\n';

    return 0;
}