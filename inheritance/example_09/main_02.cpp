#include <iostream>
#include <string>

class Animal {
    protected:
        std::string m_name;

        Animal(std::string name)
            : m_name(name)
        { }

    public:
        std::string& getName() { return m_name; }
        virtual std::string speak() { return "???"; }
};

class Cat: public Animal {
    public:
        Cat(std::string name)
            : Animal(name)
        { }

        std::string speak() { return "miau!"; }
};

class Dog: public Animal {
    public:
        Dog(std::string name)
            : Animal(name)
        { }

        std::string speak() { return "au-au!"; }
};

void report(Animal& animal) {
    std::cout << animal.getName() << " fala " << animal.speak() << '\n';
}

int main() {
    Cat cat{ "Fred" };
    Dog dog{ "Garbo" };
    report(cat);
    report(dog);

    return 0;
}