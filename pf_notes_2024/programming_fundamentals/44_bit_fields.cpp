// Bit Field is a feature in C++ for specifying the size of struct and class members so that they occupy a specific number of bits, not the default memory size.

#include <iostream>
using namespace std;

struct BITS_8 {
    unsigned b0 : 1;
    unsigned b1 : 1;
    unsigned b2 : 1;
    unsigned b3 : 1;
    unsigned b4 : 1;
    unsigned b5 : 1;
    unsigned b6 : 1;
    unsigned b7 : 1;
};

int main() {
    BITS_8 bt;
    bt.b1 = bt.b3 = 1;
    cout << bt.b7 << " " << bt.b6 << bt.b5 << bt.b4 << bt.b3 << bt.b2 << bt.b1 << bt.b0 << endl;

    cout << "Size of BITS_8 struct: " << sizeof(BITS_8) << " bytes" << endl;
    return 0;
}

//MORE INFO: https://www.geeksforgeeks.org/cpp-bit-fields/