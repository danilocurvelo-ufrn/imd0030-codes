#include "date.h"

int main () {

    Date hoje;

    hoje.setDay(9);
    hoje.setMonth(4);
    hoje.setYear(2024);

    hoje.printDate();

    hoje.setYear(2025);

    hoje.printDate();

}