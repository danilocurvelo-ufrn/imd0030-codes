#include <iostream>
#include "student_this.h"

int main() {
    Student s1;
    s1.setAge(20);
    std::cout << "Student age: " << s1.getAge() << std::endl;
    return 0;
}