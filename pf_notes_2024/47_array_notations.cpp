// Notations in an array refer to the various ways you can access and manipulate elements within an array in C++.
#include <iostream>
// the name of the array is its address.not need to use '&' operator
using namespace std;
int main(){
	int arr[5]={1,2,3,4,5};

	// Subscript Notation:
	cout<<arr[2];

	// Pointer Arithmetic:
	int *ptr=arr;
	cout<<*(ptr+2);

	// Array Name as a Constant Pointer:
	cout<<*(arr+2);

	// Pointer to Array:
	int (*pptr)[5]=&arr; // Pointer to the entire array(we have to use &arr with this situation)
	cout<<(*pptr)[2]; // Accessing the element at index 2 using a pointer to the array

	// Casting Pointer Type:
	// Function Pointers:
	
	return 0;
}
/*
Q:why (*pptr)[5]=arr shows error?
When you use arr in the declaration of pptr, the array name arr is treated as a pointer to its first element (&arr[0]).
This behavior is a form of implicit conversion known as array-to-pointer decay.
The type of pptr is a pointer to an array of 5 integers (int (*)[5]).
Therefore, pptr can point to the entire array, not just a single element.
*/

