#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Woof" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "Meow" << endl;
    }
};

int main() {
    Animal *animal = new Animal();
    Dog *dog = new Dog();
    Cat *cat = new Cat();

    animal->makeSound();
    dog->makeSound();
    cat->makeSound();

    return 0;
}