class Poligono {
   protected:
      double largura;
      double altura;
   public:
      Poligono(double a, double h) : largura(a), altura(h) {}
      virtual double area() { return 0; }
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
