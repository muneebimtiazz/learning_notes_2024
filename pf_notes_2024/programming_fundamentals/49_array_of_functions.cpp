#include <iostream>
using namespace std;

// Function 1: Add two numbers
int add(int a,int b){
    return a+b;
}

// Function 2: Subtract two numbers
int subtract(int a,int b){
    return a-b;
}

// Function 3: Multiply two numbers
int multiply(int a,int b){
    return a*b;
}

// Function 4: Divide two numbers
int divide(int a,int b){
    if(b != 0){
        return a/b;
    }else{
        cout<<"Error: Division by zero."<<endl;
        return 0;
    }
}

int main() {
    // Declare an array of function pointers
    int (*functionArray[])(int, int)={add, subtract, multiply, divide};

    // Choose a function based on user input
    int choice;
    cout << "Select an operation (1:Add, 2:Subtract, 3:Multiply, 4:Divide): ";
    cin >> choice;

    if (choice >= 1 && choice <= 4) {
        int num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        // Call the selected function from the array
        int result = functionArray[choice - 1](num1, num2);
        cout << "Result: " << result << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
