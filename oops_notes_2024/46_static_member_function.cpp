
#include <iostream>
using namespace std;

class Team {
private:
    static int squadMembers;

public:
    // Constructor (for demonstration purposes, not needed for static member functions)
    Team() {
    }

    // Static member function to set the number of squad members
    static void setSquadMembers(int members) {
        squadMembers = members;
    }

    // Static member function to get the number of squad members
    static int getSquadMembers() {
        return squadMembers;
    }
};

int Team::squadMembers = 15; // Static data variable initialization

int main() {
    // Accessing the number of squad members using the static member function
    cout << "Initial number of squad members: " << Team::getSquadMembers() << endl;

    // Modifying the number of squad members using the static member function
    Team::setSquadMembers(17);

    // Accessing the updated number of squad members
    cout << "Updated number of squad members: " << Team::getSquadMembers() << endl;

    return 0;
}
