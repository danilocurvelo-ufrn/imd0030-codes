#include <iostream>
#include "tempo.h"

std::ostream& operator<< (std::ostream &out, Tempo const &t) {
    out << t.horas << ":" << t.minutos << ":" << t.segundos;
    return out;
}

int main() {
   Tempo r(12, 30, 0);   // 12h 30min 0s

   std::cout << r;

   return 0;
}
