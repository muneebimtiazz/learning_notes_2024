#include<iostream>
using namespace std;
int main(){
// Constants in C++ are given to such variables or values which cannot be modified or changed once they are defined.
    int age=14;   // age is 14
    age=17;       // age is 17

    const int marks=49;    // marks is 49
    // marks=55;   //error

// In C++, when you declare a variable as a constant using the const keyword, it means you've decided that the value of that variable won't change throughout your program.These variables are often called "read-only" because you can read their values but can't change them once they're set
    int x=10;
    x++;
    cout<<x;

    const int x=10;
    // x++; error
    cout<<x;

    return 0;
}