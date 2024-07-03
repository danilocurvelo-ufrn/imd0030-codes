#include "tempo.h"

Tempo::Tempo() {}

Tempo::Tempo(short h, short m, short s) 
  : horas(h), minutos(m), segundos(s)
{
}

short Tempo::getHoras() { return horas; }
short Tempo::getMinutos() { return minutos; }
short Tempo::getSegundos() { return segundos; }

Tempo& Tempo::operator= (Tempo &t) {
  horas = t.horas;
  minutos = t.minutos;
  segundos = t.segundos;
  return *this;
}

