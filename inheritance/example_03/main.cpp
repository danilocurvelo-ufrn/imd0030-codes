#include <string>
#include <iostream>

class Person {
    public:
        std::string m_name;
        int m_age;

        Person(std::string name = "", int age = 0)
            : m_name(name), m_age(age)
        {
        }
        const std::string& getName() const { return m_name; }
        int getAge() const { return m_age; }

};

class BaseballPlayer : public Person {
    public:
        double m_battingAverage;
        int m_homeRuns;

        BaseballPlayer(double battingAverage = 0.0, int homeRuns = 0)
        : m_battingAverage{battingAverage}, m_homeRuns{homeRuns}
        {
        }
};

class Employee: public Person {
    public:
        double m_hourlySalary;
        long m_employeeID;

        Employee(double hourlySalary = 0.0, long employeeID = 0)
            : m_hourlySalary(hourlySalary), m_employeeID(employeeID)
        {
        }

        void printNameAndSalary() {
            std::cout << m_name << ": " << m_hourlySalary << '\n';
        }
};

class Supervisor: public Employee {
    public:
        long m_overseesIDs[5];
};

int main() {
    // Cria um novo objeto BaseballPlayer
    BaseballPlayer joe;
    // Atribuímos um valor ao atributo m_name, que é public (da classe base)
    joe.m_name = "Joe";
    // Print out the name
    std::cout << joe.getName() << '\n'; // usamos getName() para obter o valor do atributo

    return 0;
}

// int main() {
//     Employee frank(20.25, 12345);
//     frank.m_name = "Frank";

//     frank.printNameAndSalary();

//     return 0;
// }