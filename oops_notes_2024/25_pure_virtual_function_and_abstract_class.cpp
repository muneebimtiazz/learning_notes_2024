#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() = 0;
};

class Derv1 : public Base {
public:
    void show() override {
        cout << "Derv1" << endl;
    }
};

class Derv2 : public Base {
public:
    void show() override {
        cout << "Derv2" << endl;
    }
};

int main() {
    // Base bad; // can’t make object from abstract class
    Base* arr[2]; // array of pointers to base class
    Derv1 dv1; // object of derived class 1
    Derv2 dv2; // object of derived class 2

    arr[0] = &dv1; // put the address of dv1 in the array
    arr[1] = &dv2; // put the address of dv2 in the array

    arr[0]->show(); // execute show() in both objects
    arr[1]->show();

    return 0;
}
