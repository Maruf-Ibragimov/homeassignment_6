#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Square" << endl;
    }
};

int main() {
    vector<unique_ptr<Shape>> shapes;
    shapes.push_back(make_unique<Circle>());
    shapes.push_back(make_unique<Square>());

    for (auto &shape: shapes) {
        shape->draw();
    }
}
