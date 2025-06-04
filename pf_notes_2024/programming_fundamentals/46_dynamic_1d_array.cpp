
// One simple way of implementing dynamic arrays is to initially start with some fixed size array. As soon as that array becomes full, create the new array double the size of the original array. Similarly, reduce the array size to half if the elements in the array are less than half
// with dynamic memory allocation, such as using malloc in C, the size of the array is determined during runtime. The memory for the array is allocated during the execution of the program. 
// Also known as a growable array, resizable array, dynamic table, or array list.
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){

	// Example using dynamic memory allocation
	int *dArray;
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;
	dArray = new int[size];
	// Use dynamicArray as needed
	delete[] dArray;  // Don't forget to free the allocated memory



	// example for understanding
	/*As the user enters more elements (10 in this case), the array dynamically doubles its size when it needs more space. So, after the 4th element, the size becomes 6, and after the 7th element, the size becomes 12.*/
	
	int no_of_elements;
	cout<<"enter no of elements user want to input:";
	cin>>no_of_elements;
	int *dynamicArray=new int[3]; //originally allocated array

	for(int i=0;i<no_of_elements;i++){
		cout<<"element:";
		cin>>dynamicArray[i];
	}
	for(int i=0;i<no_of_elements;i++){
		cout<<dynamicArray[i]<<",";
	}

	delete[] dynamicArray; // This deletes the originally allocated array
	cout<<"dynamicArray array deleted succesfully"<<endl;

	//for(int i=0;i<no_of_elements;i++){
	//	cout<<dynamicArray[i]<<endl;
	//}


	return 0;
}

// To allocate memory on the heap, we use the new operator, as demonstrated in the int *dynamicArray=new int[3]. This statement reserves memory in the heap to store an integer initialized with the value 3. As heap-allocated memory is not directly accessible, we employ a pointer, ptr, which is stored in the stack. This pointer holds the address of the allocated heap memory, enabling us to access and manipulate the data within. It's crucial to use delete ptr when done to release the allocated memory and prevent memory leaks. In essence, the heap provides a dynamic storage area, and pointers facilitate efficient management of this allocated memory.