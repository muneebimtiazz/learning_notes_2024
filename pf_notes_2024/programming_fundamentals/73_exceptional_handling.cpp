#include<iostream>
using namespace std;

int main() {
    int mathmarks;

    cout << "\nEnter marks: ";
    cin >> mathmarks;

    try {
        if (mathmarks > 50) {
            cout << "\nEligible for Admission";
        } else {
            throw mathmarks;
        }
    } catch (int numbers) {
        cout << "Not Eligible - You must have at least 50 marks\n";
        cout << "Marks Claimed: " << numbers << "\n";
    }

    return 0; 
}
