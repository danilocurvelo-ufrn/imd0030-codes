#include "date.h"
#include <iostream>

void Date::setDay(int d) {
    day = d;
}

int Date::getDay() {
    return day;
}

void Date::setMonth(int m) {
    month = m;
}

int Date::getMonth() {
    return month;
}

void Date::setYear(int y) {
    year = y;
}

int Date::getYear() {
    return year;
}

void Date::printDate() {
    std::cout << day << "/" << month << "/" << year << std::endl;
}