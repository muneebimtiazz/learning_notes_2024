#include <iostream>

class B {
public:
    int a;
    int b;

    B(int aValue, int bValue) : a(aValue), b(bValue) {}

    int add() {
        return a + b;
    }

    void operator+(const B &obj) {
        int value1 = this->a;
        int value2 = obj.a;
        std::cout << "output: " << value1 + value2 << std::endl;
    }
};

int main() {
    B obj1(4, 5);
    B obj2(7, 8);

    int result = obj1.add();
    std::cout << "Result of add() for obj1: " << result << std::endl;

    obj1 + obj2;  // Using the overloaded + operator

    return 0;
}


// use operator to do my own custom work
// Two operators = and & are already overloaded by default in C++. For example, to copy objects of the same class, we can directly use the = operator. We do not need to create an operator function.
// Operator overloading cannot change the precedence and associativity of operators. However, if we want to change the order of evaluation, parentheses should be used.
// There are 4 operators that cannot be overloaded in C++. They are:
// :: (scope resolution)
// . (member selection)
// .* (member selection through pointer to function)
// ?: (ternary operator)
