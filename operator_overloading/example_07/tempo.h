#include <iostream>

class Tempo {
   private:
      short horas;
      short minutos;
      short segundos;
 
   public:
      Tempo();
      Tempo(short h, short m, short s);
      friend std::ostream& operator<< (std::ostream &out, Tempo const &t);
      friend std::istream& operator>> (std::istream &in, Tempo &t);

      short getHoras();
      short getMinutos();
      short getSegundos();
};
