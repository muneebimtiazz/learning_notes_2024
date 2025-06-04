// difference between a pointer to an integer (int *p) and a pointer to an array of integers (int (*ptr)[3])
#include <iostream>
using namespace std;
int main(){
//1d-array
    int arr[3]={1,2,3};
    
    int *p;         // Can point to an integer
    int (*ptr)[3];  // Can point to an array of 3 integers

    p=arr;        // Points to the first element 0th index of the array
    ptr=&arr;     // Points to the entire array

    cout <<"before incrementing: "<<endl;
    cout <<"p="<<p<<",ptr="<<ptr<<endl;

    p++;            // Moves to the next integer in the array
    ptr++;          // Moves to the next array of 5 integers
    cout<<"After incrementing: "<<endl;
    cout<<"p="<<p<<",ptr="<<ptr<<endl;


//2d-array
    int arr2[3][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12}};

    int (*pptr)[4];  // Can point to a 2D array of 4 integers
    pptr=arr2;      // Points to the first row of the 2D array

    cout<<"Before incrementing: "<<endl;
    cout<<"ptr="<<pptr<<",*ptr="<<(*pptr)[0]<<endl;

    pptr++;          // Moves to the next row in the 2D array
    cout<<"After incrementing: "<<endl;
    cout<<"ptr="<<pptr<<",*ptr="<<(*pptr)[0]<<endl;

    pptr++;
    cout<<"After incrementing: "<<endl;
    cout<<"ptr="<<pptr<<",*ptr="<<(*pptr)[0]<<endl;
    return 0;
}
