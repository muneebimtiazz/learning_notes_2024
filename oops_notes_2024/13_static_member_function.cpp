// static member functions:refers to functions that is declared static within the class.
// a static member function is a function/method that belongs to a class rather than as instance(obj) of that class.
// Don't need an object to access that funciton/method; access the property without any object
// no this keyword because they dont have the obj
// static member functions can only access static data members

#include<iostream>
using namespace std;

class Team {
public:
    static int squadMembers;
    static int access();
};

int Team::squadMembers = 15;
int Team::access() {
    return squadMembers;
}

int main() {
    // Accessing the static member function without creating an object
    cout << "Squad Members: " << Team::access() << endl;

    return 0;
}
