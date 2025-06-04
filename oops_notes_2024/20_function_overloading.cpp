#include <iostream>
using namespace std;

class Calculator {
public:
    // Overloaded function with different parameter types
    int sum(int a, int b) {
        return a + b;
    }

    double sum(double a, double b) {
        return a + b;
    }

    // Overloaded function with a different number of parameters
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Overloaded function with a different sequence of parameters
    int addition(int a, double b) {
        return a + b;
    }

    int addition(double a, int b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "sum(5,10): " << calc.sum(5, 10) << endl;
    cout << "sum(5.5,10.5): " << calc.sum(5.5, 10.5) << endl;

    cout << "add(5,10): " << calc.add(5, 10) << endl;
    cout << "add(5,10,15): " << calc.add(5, 10, 15) << endl;

    cout << "addition(10,2): " << calc.addition(10.5, 2) << endl;
    cout << "addition(10.2,12.5): " << calc.addition(2, 10.5) << endl;

    return 0;
}
