#include <iostream>

class Base {
    public:
        Base() { }

        void identify() { std::cout << "Base::identify()\n"; }
};

class Derived: public Base {
    public:
        Derived() { }

        void identify() { std::cout << "Derived::identify()\n"; }
};

int main() {
    Base base;
    base.identify();

    Derived derived;
    derived.identify();

    return 0;
}