// The best approach
#include<iostream>
#include<string>
using namespace std;

int main() {
//input:
    string getUserName;
    cout << "Now enter your name: ";
    getline(cin, getUserName);
    cout<<getUserName;
    /* Explanation:
       The best way to get input from the user is to use the string
       data type. This allows dynamic sizing, avoiding the need to
       declare a fixed size at compile time. Additionally, using
       getline instead of cin is preferred because cin stops
       execution immediately after encountering a space, tab, or
       newline character.
    */


//output:
    string sentence="have a good day";
	cout<<sentence.size()<<endl;
	cout<<sentence[7]<<endl;
	cout<<sentence.find("good",0)<<endl;
	cout<<sentence.substr(7,4)<<endl;

    return 0;
}
