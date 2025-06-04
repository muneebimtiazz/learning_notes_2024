/*In object-oriented programming, a virtual base class is a concept used in multiple inheritance to avoid the "diamond problem" or "deadly diamond of death." The diamond problem occurs when a class inherits from two or more classes that have a common base class. This can lead to ambiguity in the inheritance hierarchy, as multiple copies of the common base class may be present, causing issues with method and variable access.
To resolve this problem, C++ introduced the concept of virtual base classes. When a base class is declared as virtual, it means that there should be only one instance of that base class shared among all the derived classes. This eliminates the ambiguity and ensures that there is a single path to access the members of the virtual base class.*/

#include <iostream>
using namespace std;
class Vehicle {
public:
    void start(){
        cout<<"Vehicle started" <<endl;
    }
};

class Engine{
public:
    void start(){
        cout<<"Engine started" <<endl;
    }
};

class Car:public virtual Vehicle, public virtual Engine{
public:
    void drive(){
        cout<<"Car is driving" <<endl;
    }
};
//In this example, both Vehicle and Engine are declared as virtual base classes. You can see that they are declared as virtual in the Car class's inheritance list:
//By using the virtual keyword in the inheritance list, you indicate that Vehicle and Engine are virtual base classes. This ensures that there is only one shared instance of each of these base classes among all the classes in the inheritance hierarchy. 
int main(){
    Car myCar;
    myCar.Vehicle::start();  // Calls the start from Vehicle due to virtual inheritance
    myCar.drive();

    // The first listed base class takes precedence when you call functions with the same name. If you want a specific base class's function to be called first, you need to list that class first in the inheritance list.

    return 0;
}
