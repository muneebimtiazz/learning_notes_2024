// accessing static 1d array with pointer notation
#include<iostream>
using namespace std;
int main(){
    int arr[6]={5,10,15,20,25,30};
    // int arr[];   // Error: Incomplete type is not allowed
    // The size of an array declared with this syntax must be a constant known at compile time.
    
// elements of an array store sequencially in memory one after another
    cout<<arr[0]<<&arr[0]<<endl;
    cout<<arr[1]<<&arr[1]<<endl;
    cout<<arr[2]<<&arr[2]<<endl;
    cout<<arr[3]<<&arr[3]<<endl;
    cout<<arr[4]<<&arr[4]<<endl;
    cout<<arr[5]<<&arr[5]<<endl;
    
    cout<<"The name of the array 'arr' denotes the address of 0th element of array:"<<arr<<endl; //arr=&arr[0];
//The name of an array is a CONSTANT pointer that points to the first element of the array, i.e. it stores the address of the first element, also known as the base address of array.
//Address of the first element using &arr[0] or arr
    cout<<"Address of the first element: "<< &arr[0]<<" or "<<arr<<endl;

    for(int i=0;i<5;i++){
    	cout<<"subscript notation address:"<<&arr[i]<<","<<"subscript notation element:"<<arr[i]<<endl;
        cout<<"pointer expression"<<(arr+i)<<","<<"Dereferencing pointer expression:"<<*(arr+i)<<endl;
        // The name of an array is a constant pointer, and according to pointer arithmetic when an integer is added to a pointer then we get the address of next element of same base type.
    }
    return 0;
}

//Array subscripting is commutative, i.e. arr[i] is same as i[arr].
//arr[i] is equivalent to *(arr+i).Now *(arr+i) is same as *(i+arr).
//arr[i] is equivalent to *(i+arr).Now *(i+arr) can be written as i[arr].


/*
Q:d/w between name of array and pointer variable?
arr=&num; //wrong
ptr=&num; //correct

Q:why using pointer variable?
Flexibility:
A pointer variable provides more flexibility. You can reassign it to point to different elements or arrays. This flexibility is not available with the array name itself.
Explicitness:
Using a pointer variable makes your code more explicit. It clearly indicates that you are working with a pointer, and it can help improve code readability.
Dynamic Memory Allocation:
Pointers are crucial when dealing with dynamic memory allocation (e.g., using new and delete in C++). In such cases, you must use pointers, and the array name alone is not sufficient.
Function Arguments:
When passing an array to a function, it's typically done using a pointer. The function receives a pointer to the first element, not the entire array.
*/