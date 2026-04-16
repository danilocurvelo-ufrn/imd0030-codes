#include <iostream>
#include "student.h"

void Student::setAge(int a) {
    if (a >= 0) { 
        age = a; 
    } else {
        std::cout << "Invalid age!" << std::endl;
    }
}

int Student::getAge() const {
    return age;
}


