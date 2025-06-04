// bindings in C++ refer to the behavior of function calls and how the appropriate function implementation is determined. Early binding is associated with non-virtual functions, while late binding is associated with virtual functions and polymorphism, where the decision on which function to call is made at runtime based on the actual type of the object.
#include <iostream>
using namespace std;
class Base{
public:
    void printMessage(){
        cout<<"Message from Base class"<<endl;
    }
};

class Derived:public Base{
public:
    void printMessage(){
        cout<<"Message from Derived class"<<endl;
    }
};

int main(){
    Base baseObj;
    Derived derivedObj;

    Base* basePtr=&baseObj;
    Derived* derivedPtr = &derivedObj;

    // Early binding (static binding)
    baseObj.printMessage();     // Calls Base::printMessage() at compile time
    derivedObj.printMessage();  // Calls Derived::printMessage() at compile time

    // Late binding (dynamic binding)
    basePtr->printMessage();    // Calls Base::printMessage() at runtime
    derivedPtr->printMessage(); // Calls Derived::printMessage() at runtime

    return 0;
}
