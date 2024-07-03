#include "tempo.h"

Tempo::Tempo(short h, short m, short s) 
  : horas(h), minutos(m), segundos(s)
{
}

short Tempo::getHoras() { return horas; }
short Tempo::getMinutos() { return minutos; }
short Tempo::getSegundos() { return segundos; }

Tempo Tempo::operator++ () {
  ++horas;
  ++minutos;
  ++segundos;
  return Tempo(horas, minutos, segundos);
}
