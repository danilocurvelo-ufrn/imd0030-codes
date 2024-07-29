#include <iostream>

class Poligono {
   protected:
      double largura;
      double altura;
   public:
      Poligono(double a, double h) : largura(a), altura(h) {}
      virtual double area() = 0;
      void printArea() { std::cout << area() << std::endl; }
};

class Retangulo : public Poligono {
   public:
      Retangulo(double a, double h) : Poligono(a, h) {}
      double area() { return largura * altura; }
};

class Triangulo : public Poligono {
   public:
      Triangulo(double a, double h) : Poligono(a, h) {}
      double area() { return (largura * altura / 2); }
};

int main() {
    // Poligono p(5, 5); ERRO!
    Retangulo r(5, 5);
    Triangulo t(5, 5);
    r.printArea(); // 25
    t.printArea(); // 12.5

    return 0;
}