#include <iostream>

class Poligono {
    public:
        virtual void print() = 0;
        virtual double area() = 0;
};

class Retangulo : public Poligono {
    protected:
        double largura;
        double altura;

    public:
        Retangulo(double l, double h) 
            : largura(l), altura(h) 
        {

        }

        void print() { 
            std::cout << "Retangulo: l = " << largura << ", a = " << altura << std::endl;
        }

        double area() { 
            return largura * altura; 
        }
};

int main() {
    Retangulo r(1, 2);
    r.print();
    std::cout << "Area do retangulo: " << r.area() << std::endl;
    return 0;
}

