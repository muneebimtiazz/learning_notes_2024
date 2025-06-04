// accessing static 2d array with pointer notation

#include<iostream>
using namespace std;
int main(){
    int arr[3][4] = { {10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33} };
    //Each row can be considered as a 1-d array, so a two-dimensional array can be considered as'a collection of one-dimensional arrays that are placed one after another, In other words we can say that a 2-d array is an array of array. So here arr is an array of 3 elements where each element is a 1-d array of 4 integers

    int i,j;
    for(i=0;i<3;i++){
        cout<<"row"<<i<<","<<arr[i]<<","<<(arr+i)<<endl;
        for(j=0;j<4;j++){
            cout<<arr[i][j]<<","<<*(*(arr+i)+j)<<endl;
        }
    }



    //In computer memory, especially in languages like C and C++, a 2D array is typically stored in a linear or contiguous manner. The concept of rows and columns is often more of a logical or conceptual representation than a physical one in memory.For a 2D array, whether it's a matrix or any other structure, there are two common ways of storing it in memory: row-major order(c,c++ etc) and column-major order(fortran).
    return 0;
}