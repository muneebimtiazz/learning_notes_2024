#include <iostream>
using namespace std;
int main(){
    // Nested Loops
    // pattarn rectangle
	int rows,cols;
	cout<<"enter the number of rows: ";
	cin>>rows;
	cout<<"enter the number of colums: ";
	cin>>cols;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<"* ";	
		}
		cout<<endl;}
    // pattarn half pramid
    int n;
	cout<<"enter the number of rows: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"* ";	
		}
		cout<<endl;}

    // pattarn half pramid 180deg
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;}

	// full pramid
	for(int i=1;i<=n;i++){
    	// Print spaces before the stars
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        // Print stars
        for(int k=1;k<=2*i-1;k++) {
            cout<< "*";
        }
        // Move to the next line after each row
        cout<<endl;
    }
	return 0;
}
