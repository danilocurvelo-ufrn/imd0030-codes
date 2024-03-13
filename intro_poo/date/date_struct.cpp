#include <iostream>

struct Date {
    int year;
    int month;
    int day;
};

void print(struct Date date) {
    std::cout << date.day << '/' << date.month << '/' << date.year << std::endl;
}

int main() {
    Date today = { 2020, 10, 14 };

    print(today); 

    return 0;
}