#include <iostream>
#include "tempo.h"

int main() {
   Tempo r(12, 30, 0);   // 12h 30min 0s
   Tempo t(1, 20, 0);    //  1h 20min 0s

   Tempo y = r.somar(t);

   std::cout << y.getHoras() << ":" << y.getMinutos() << ":" << y.getSegundos();

   return 0;
}
