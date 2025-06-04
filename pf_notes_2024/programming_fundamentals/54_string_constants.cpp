#include<iostream>
using namespace std;
int main() {
    char greeting[]="Hello, World!"; // Automatically calculates the size
    cout<<"Character array: "<<greeting<<endl;


// limitations:
    char name[] = "muneeb imtiaz";
    cout << "String constant output: " << name << endl;

    // char userName[];
    // cin >> userName;

    /* Explanation:
       You can't use string constants to get input from the user.
       To get input from the user, you need to declare the size
       of the char array. Uncommenting the above lines will result
       in a compilation error.
    */
    return 0;
    
}
