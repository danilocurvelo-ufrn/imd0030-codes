#include <iostream>
#include "tempo.h"

std::ostream& operator<< (std::ostream &out, Tempo const &t) {
    out << t.horas << ":" << t.minutos << ":" << t.segundos;
    return out;
}

std::istream& operator>> (std::istream &in, Tempo &t) {
    in >> t.horas >> t.minutos >> t.segundos;
    return in;
}

int main() {
    Tempo t;   // 12h 30min 0s

    std::cin >> t;

    std::cout << t;

    return 0;
}
