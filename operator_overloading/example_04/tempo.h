class Tempo {
   private:
      short horas;
      short minutos;
      short segundos;
 
   public:
      Tempo(short h, short m, short s);
      Tempo operator++();

      short getHoras();
      short getMinutos();
      short getSegundos();
};
