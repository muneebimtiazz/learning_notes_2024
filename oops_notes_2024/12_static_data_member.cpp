// static data variable:refers to variable that is declared static within the class.
// a static data variable is a variable that belongs to a class rather than as instance(obj) of that class.
// Don't need an object to access the static keyword variable; access the property without any object
// only one copy of a static data variable shared among all instances of the class 

#include<iostream>
using namespace std;
class Team {
public:
    static int squadMembers;
};

// Initializing static data member outside the class
int Team::squadMembers = 15;

int main() {
    cout << "Squad Members (without object): " << Team::squadMembers << endl;

    // Creating an object (not recommended for accessing static members)
    Team manutd;

    cout << "Squad Members (with object): " << manutd.squadMembers << endl;

    return 0;
}
