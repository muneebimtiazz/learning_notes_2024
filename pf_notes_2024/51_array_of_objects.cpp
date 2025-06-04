#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass(int val) : value(val) {} // Constructor
    void display() {
        cout << "Value: " << value << endl;
    }

private:
    int value;
};

int main() {
    // Declare an array of MyClass objects
    MyClass myArray[3] = {MyClass(1), MyClass(2), MyClass(3)};

    // Access and use the objects in the array
    for (int i = 0; i < 3; i++) {
        myArray[i].display();
    }

    return 0;
}
