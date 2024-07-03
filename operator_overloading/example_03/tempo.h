class Tempo {
   private:
      short horas;
      short minutos;
      short segundos;
 
   public:
      Tempo(short h, short m, short s);
      Tempo operator+ (Tempo &t);

      short getHoras();
      short getMinutos();
      short getSegundos();
};
