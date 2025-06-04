#include<iostream>
using namespace std;
//this is an empty class
class house{
    // data members

	// member functions/methods
// Member functions are functions inside a class that can access its private members (variables and functions).
// Member functions of a class can be accessed only by and object of that class.
};
int main(){
    
    // an object is an instance of a class.objects are sometimes called instance variables.
    house h1;

    cout<<sizeof(h1);  //system allocates 1byte just for tracking or identification

	return 0;
}
// for more understanding learn about padding greedy alignment concept
// https://medium.com/@xsankalp13/padding-and-greedy-alignment-d2e3a843c35#:~:text=By%20understanding%20how%20padding%20works%20and%20applying%20greedy%20alignment%20techniques,of%20size%20to%20minimize%20padding.

