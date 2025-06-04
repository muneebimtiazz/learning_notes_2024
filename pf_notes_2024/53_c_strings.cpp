#include<iostream>
#include <cstring> //strcat and strcpy
using namespace std;
int main(){
// output:
	char name[7]={'m','u','n','e','e','b',};
    cout<<name<<endl;
    /*last element of the string is always a null \0.
    muneeb has only 6 elements but we cant set the size 
    of char array to 6 it qives a error or garbage value at the end.
    we always has to give a size 1 more than total number of elements */
    
    char greetingWithName[30]; // Ensure enough space for concatenation
    char greeting[]="nice to meet you";
    strcpy(greetingWithName,greeting); // Copy greeting to greetingWithName
    strcat(greetingWithName," "); // Append a space
    strcat(greetingWithName,name); // Append name
    cout<<greeting;
// input:
    char userInput[20]; // max length=20
    cout << "Enter your name: ";
    cin.getline(userInput, 20); 
    cout << "You entered: " << userInput << endl;
    
    
// limitations:
    char userName[10];
    cout << "Enter your name (up to 9 characters): ";
    cin >> userName;

    /* Explanation:
       While this approach allows user input, it has limitations.
       The size is declared at compile time, and if the user enters
       more characters than expected, the excess data will be lost.
    */
    
    return 0;
}