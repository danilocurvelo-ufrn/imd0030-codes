class Base {
    public:
        int m_id;

        Base(int id=0)
            : m_id(id)
        {
        }

        int getId() { return m_id; }
};

class Derived: public Base {
    public:
        double m_cost;

        Derived(double cost=0.0, int id=0)
            // NÃO FUNCIONA!
            : m_cost(cost), m_id(id)
        {
            m_id = id;
        }

        double getCost() { return m_cost; }
};

int main() {
    Base base(5); // usa o construtor Base(int)
    Derived derived(1.3); // usa o construtor Derived(double)

    return 0;
}