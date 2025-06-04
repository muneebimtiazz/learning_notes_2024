/*A pointer is a variable that store memory address. Like all other variables it also has a name, has to be declared and occupies space in memory. It is called pointer because it points to a particular location in memory by storing the address of that location*/
#include <iostream>
using namespace std;
int main(){
	int a=8;
	float b=3.99;

// declaration of pointer variables
	// int *ptr1;
	// ptr1=&a;  
	//Each byte has an index number, which is called the address of that byte.
	// The address operator cannot be used with a constant or an expression.
	// Valid used: '&a' variable,'&arr[1]' array element.

// declaration and assigning the pointer variable
	int *ptr1=&a;
	float *ptr2=&b;
	// When we declare a pointer variable it contains garbage value i.e, it may be pointing anywhere in the memory.
	// you can assign the value of one pointer variable to another. When you assign one pointer to another, you are making both pointers point to the same memory address.  

	cout<<"Value of ptr1=adress of a:"<<ptr1<<endl; 
	cout<<"Value of ptr2=adress of b:"<<ptr2<<endl;
	cout<<"Address of ptr1:"<<&ptr1<<endl;
	cout<<"Address of ptr2:"<<&ptr1<<endl;
	cout<<"Value of a:"<<a<<","<<*ptr1<<","<<*(&ptr1)<<endl;  //By placing the indirection operator'*' before a pointer variable, we can access the variable whose address is stored in the pointer. 
	cout<<"Value of b:"<<b<<","<<*ptr2<<","<<*(&ptr2)<<endl;

	return 0; 
}

/*
Q:what is meant by the term *(&ptr1)?
ans:where ptr1 is a variable. Since &ptr1 is an address,so dereferencing it with *. operator will give the variable at that address and the variable at that address is a.

Q:what is meant by the term dereferencing?
ans:Dereferencing in C++ is the process of accessing the value that a pointer points to. When you dereference a pointer, you retrieve the actual value stored at the memory location to which the pointer is pointing. The dereference operator is the asterisk (*).
*/
