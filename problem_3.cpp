#include <iostream>
#include <string>

using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base display" << endl;
    }
};

class Derived1 : public Base {
public:
    void display() {
        cout << "Derived1 display" << endl;
    }
};

class Derived2 : public Base {
public:
    void display() {
        cout << "Derived2 display" << endl;
    }
};

int main() {
    Base *base = new Base();
    Derived1 *derived1 = new Derived1();
    Derived2 *derived2 = new Derived2();

    base->display();
    derived1->display();
    derived2->display();

    return 0;
}