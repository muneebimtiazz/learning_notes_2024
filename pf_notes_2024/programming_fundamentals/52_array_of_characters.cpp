#include <iostream>
#include <cstring> // Include the header for strcat and strcpy
using namespace std;

int main() {
    // Declaring a character array (C-style string)
    char myString[20]; // This array can hold up to 19 characters plus the null character

    // Initializing a character array
    char greeting[]="Hello, World!"; // Automatically calculates the size

    // Accessing and printing a character array
    cout<<"Character array: "<<greeting<<endl;

    // Modifying elements of a character array
    greeting[5] = '-'; // Changing a character

    // c-strings

    /*last element of the string is always a null 0.
    hello has only 5 elements but we cant set the size 
    to 5 it qives a error.we always has to give a size
    1 more than total elements */

    char str[6]="hello";
    cout<<str;

    // Appending to a character array
    char name[]="Alice";
    char greetingWithName[30]; // Ensure enough space for concatenation
    strcpy(greetingWithName,greeting); // Copy greeting to greetingWithName
    strcat(greetingWithName," "); // Append a space
    strcat(greetingWithName,name); // Append name

    cout<<"Modified character array: "<<greetingWithName<<endl;
    return 0;
}
