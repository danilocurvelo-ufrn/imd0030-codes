#include <iostream>
#include "tempo.h"

int main() {
   Tempo r(12, 30, 0);   // 12h 30min 0s
            
   ++r;	//r.operator++();

   std::cout << r.getHoras() << ":" << r.getMinutos() << ":" << r.getSegundos();
   
   return 0;

}
