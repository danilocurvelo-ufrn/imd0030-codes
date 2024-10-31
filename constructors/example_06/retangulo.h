class Retangulo {
    private:
      int m_largura;
      int m_altura;
   
    public:
      Retangulo(int largura = 0, int altura = 0);
      ~Retangulo();

      int getLargura();
      void setLargura(int largura);
      int getAltura();
      void setAltura(int altura);
      
      int area();
      int perimetro();
};
