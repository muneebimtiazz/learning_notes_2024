#include<iostream>
using namespace std;
// When a return statement is encountered in a function, it immediately stops the execution of the function, and control is returned to the caller.

int foo(int x){
    if(x<0){
        // Early exit if x is negative
        return -1;
    }
    return x * 2; // Return a value if x is non-negative
}

int main(){
    int a;
    cout<<"enter a int:";
    cin>>a;
    
    cout<<foo(a);
    return 0; //indicates successful execution
    return 1; //indicates that the program terminated with an error.
    return -1; //same(less common)

//  A return value of 0 typically indicates successful execution, while a non-zero value may indicate an error.
}

// return type of void, it means the function does not return any value.

