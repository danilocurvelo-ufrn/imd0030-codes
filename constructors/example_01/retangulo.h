class Retangulo {
    private:
      int m_largura;
      int m_altura;
   
    public:
      Retangulo();
      Retangulo(int largura, int altura);

      int getLargura();
      void setLargura(int largura);
      int getAltura();
      void setAltura(int altura);
      
      int area();
      int perimetro();
};
