// array of arrays(multidimentional arrays)
//Each row can be considered as a 1-d array, so a two-dimensional array can be considered as'a collection of one-dimensional arrays that are placed one after another, In other words we can say that a 2-d array is an array of array
#include <iostream>
using namespace std;
int main(){
	int arr[2][3];
	cout<<"enter integers:"<<endl;
	// for cin
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++)
		cin>>arr[i][j];
	}
		
	cout<<"integers are:"<<endl;
	// for cout	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
		cout<<arr[i][j];
		cout<<endl;
		}		
	}

	// In C++, you cannot directly create an array of strings that contains other arrays of strings like you can in JavaScript. However, you can achieve a similar result by using a vector of vectors (or a vector of arrays) to represent the nested structure.
	
	return 0; 	
}
	
