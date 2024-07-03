#include "tempo.h"

Tempo::Tempo(short h, short m, short s) 
    : horas(h), minutos(m), segundos(s)
{
}

short Tempo::getHoras() { return horas; }
short Tempo::getMinutos() { return minutos; }
short Tempo::getSegundos() { return segundos; }

Tempo Tempo::somar(Tempo t) {
  short h = horas + t.getHoras();
  short m = minutos + t.getMinutos();
  short s = segundos + t.getSegundos();
  return Tempo(h, m, s);
}
