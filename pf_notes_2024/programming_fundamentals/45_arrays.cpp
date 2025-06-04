
/*
when you declare a static array, its size is determined at compile time. The memory for that array is allocated at the moment the program is compiled and remains fixed throughout the execution.
the size of an array or number of elements must be known at compile-time.
The size of a static array is constant throughout its lifetime and cannot be changed once it's defined.
Elements in a static array are stored in contiguous memory locations.
we should tell the size of array at the compile time not in runtime.
.*/

#include <iostream>
using namespace std;
int main(){
    int max;
   	cout<<"enter no of elements:";
   	cin>>max; 
    
    //You should declare the array after reading the value of max from the user
    string anime[max]={"aot", "fmab", "jjba", "mha"}; //bad practice
 //good practice is size of array is typically declared using a constant. 

    // Accessing and printing elements from the array
    cout<<anime[0]<<endl; // "aot"
    cout<<anime[1]<<endl; // "fmab"
    cout<<anime[2]<<endl; // "jjba"
    cout<<anime[3]<<endl; // "mha"  

    // Accessing elements within bounds (array bounds)
    cout<<"Element at index 0: "<< anime[0]<<endl; // Valid
    cout<<"Element at index 3: "<< anime[3]<<endl; // Valid
    // Accessing elements out of bounds (undefined behavior)
    cout<<"Element at index -1: "<< anime[-1]<<endl; // Invalid
    cout<<"Element at index 4: "<<anime[4]<<endl;   // Invalid

    // Changing an element in the array
    anime[3]="jk";
    cout<<anime[3]<<endl; // "jk"

    // Print the entire array using a loop
    for(int i=0;i<4;i++){
        cout<<anime[i]<<" ";
    }
    cout<<endl;
    return 0;
}
// Q:In C++, if an array has a size n, we can store upto n number of elements in the array. However, what will happen if we store less than n number of elements.
// A:In such cases, the compiler assigns random values to the remaining places. Oftentimes, this random value is simply 0.

// Q:why we should tell the size of static array in the compile time not in runtime.
// A:The size of a static array is specified at compile time, primarily due to the constrained nature of the stack memory. Stack memory has a limited size, set either by the operating system or the compiler, and is designed for storing local variables and managing function calls. By determining the array size during compilation, the compiler can allocate the required memory on the stack efficiently. In contrast, allowing users to specify array sizes at runtime could lead to unpredictable memory demands, risking stack overflow and program crashes. The heap, with its relatively larger and more flexible memory space, is better suited for dynamic memory allocation, making it the preferred choice when the size of the array is not known until runtime.