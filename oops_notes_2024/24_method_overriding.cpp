// more info:https://www.geeksforgeeks.org/function-overriding-in-cpp/

#include <iostream>
using namespace std;

class Shape {
public:
    void draw() {
        cout << "Drawing a generic shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() {
        cout << "Drawing a square" << endl;
    }
};

int main() {
    Circle myCircle;
    Square mySquare;

    myCircle.draw();  // Calls Circle's draw
    mySquare.draw();  // Calls Square's draw

    Shape* shapePtr;

    shapePtr = &myCircle;
    shapePtr->draw();  // Calls Shape's draw (no dynamic dispatch)

    shapePtr = &mySquare;
    shapePtr->draw();  // Calls Shape's draw (no dynamic dispatch)

    return 0;
}
