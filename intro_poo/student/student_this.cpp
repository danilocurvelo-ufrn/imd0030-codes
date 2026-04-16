#include <iostream>
#include "student_this.h"

void Student::setAge(int age) {
    if (age >= 0) { 
        this->age = age; 
    } else {
        std::cout << "Invalid age!" << std::endl;
    }
}

int Student::getAge() const {
    return age;
}