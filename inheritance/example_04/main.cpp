#include <iostream>

class Base {
    public:
        int m_id;

        Base(int id=0)
            : m_id(id)
        {
            std::cout << "Base\n";
        }

        int getId() const { return m_id; }
};

class Derived: public Base {
    public:
        double m_cost;

        Derived(double cost=0.0)
            : m_cost(cost)
        {
            std::cout << "Derived\n";
        }

        double getCost() const { return m_cost; }
};

int main() {
    std::cout << "Instanciando Base...\n";
    Base base;

    std::cout << "Instanciando Derived...\n";
    Derived derived;

    return 0;
}