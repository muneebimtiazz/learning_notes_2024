#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance() : feet(0), inches(0) {}
    Distance(int ft, int in) : feet(ft), inches(in) {}

    // Overloading the + operator
    Distance operator+(const Distance& other) const {
        Distance result;
        result.feet = this->feet + other.feet;
        result.inches = this->inches + other.inches;

        // Adjust if inches exceed 12
        if (result.inches >= 12) {
            result.feet += result.inches / 12;
            result.inches %= 12;
        }

        return result;
    }

    // Overloading the << operator for printing
    friend ostream& operator<<(ostream& os, const Distance& distance) {
        os << "Feet: " << distance.feet << " Inches: " << distance.inches;
        return os;
    }
};

int main() {
    Distance d1(5, 8), d2(3, 10), d3;

    // Displaying individual distances
    cout << "Distance 1: " << d1 << endl;
    cout << "Distance 2: " << d2 << endl;

    // Adding distances
    d3 = d1 + d2;

    // Displaying the total distance
    cout << "\nTotal Distance: " << d3 << endl;

    return 0;
}
