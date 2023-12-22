#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    double height;
public:
    Person(string name, int age, double height) {
        this->name = name;
        this->age = age;
        this->height = height;
    }

    ~Person() {
        cout << "Person object destroyed" << endl;
    }

    void setName(string name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }

    void setHeight(double height) {
        this->height = height;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    double getHeight() {
        return height;
    }

    double calculateBMI() {
        return 0;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Height: " << height << endl;
    }
};

int main() {
    Person person("John", 20, 1.8);
    person.display();

    return 0;
}

