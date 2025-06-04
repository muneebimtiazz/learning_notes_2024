/*
When the user manually changes data from one type to another, this is known as explicit conversion. This type of conversion is also known as type casting.
There are three major ways in which we can use explicit conversion in C++. They are:

C-style type casting (also known as cast notation)
Function notation (also known as old C++ style type casting)
Type conversion operators
*/
#include<iostream>
using namespace std;
int main() {
    // Initializing a double variable
    double dnum = 3.56;
    cout<<"dnum="<<dnum<<endl;

    // C-style conversion from double to int
    int num1 = (int)dnum;
    cout << "num1=" << num1 << endl;

    // Function-style conversion from double to int
    int num2 = int(dnum);
    cout<<"num2="<<num2<<endl;

    // Type conversion operators
    // Initialize a double variable with a value
    double num_double = 3.75;
    
    // Print the original double value
    cout << "Original double value: " << num_double << endl;

    // Explicitly convert the double to an integer using static_cast
    int num_int = static_cast<int>(num_double);

    // Print the converted integer value
    cout << "Converted integer value: " << num_int << endl;

    return 0;
}

