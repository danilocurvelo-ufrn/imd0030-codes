class Retangulo {
    private:
      int m_largura;
      int m_altura;
      static int total;
   
    public:
      Retangulo(int largura, int altura);
      
      static int getTotal();

      int getLargura();
      void setLargura(int largura);
      int getAltura();
      void setAltura(int altura);
      
      int area();
      int perimetro();
};
