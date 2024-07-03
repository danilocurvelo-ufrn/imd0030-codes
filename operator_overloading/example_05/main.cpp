#include <iostream>
#include "tempo.h"

int main() {
   Tempo r(12, 30, 0);   // 12h 30min 0s
   Tempo s; 

   s = r;   

   std::cout << s.getHoras() << ":" << s.getMinutos() << ":" << s.getSegundos();

   return 0;
}
