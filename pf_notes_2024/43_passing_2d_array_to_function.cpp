#include <iostream>
using namespace std;

// The notation (*a)[4] in the function parameter indicates that a is a pointer to an array of 4 integers. 
// This means that when you pass a 2D array to this function, you are passing the address of the first element of the 2D array, and the function interprets it as a pointer to an array of 4 integers.
// If you were to use just *a, it would represent a pointer to the first element of the 1D array (the first row of the 2D array).

void func(int (*a)[4],int numRows,int numCols){
    cout<<"after:"<<endl;
    for(int i=0;i<numRows;i++){
        for(int j=0;j<numCols;j++){
            a[i][j]=a[i][j]*2;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){ 
    const int rows=3;
    const int cols=4;
    int arr[rows][cols]={{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12}};
    
    cout<<"before:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
	    }	
        cout<<endl;	
    }

    func(arr,rows,cols); //function calling

    return 0;
}
