// ..compile time polymorphism..
// When a return statement is encountered in a function, it immediately stops the execution of the function, and control is returned to the caller

#include <iostream>
using namespace std;
// different type: Two functions are considered overloaded if they have parameters with different types. For example:
int sum(int a,int b){
    return a+b;
}
double sum(double a, double b){
	return a+b;
}
// different number: Two functions are considered overloaded if they have a different number of parameters. For example:
int add(int a, int b){
    return a+b;
}
int add(int a, int b, int c){
    return a+b+c;
}
// different sequence of parameters: Two functions are considered overloaded if they have the same number of parameters, but the sequence of parameter types is different. For example:
int addition(int a, double b){
    return a+b;
}
int addition(double a, int b){
    return a+b;
}

int main(){
// different type
	cout<<"sum(5,10):"<<sum(5,10)<<endl;
    cout<<"sum(5.5,10.5):"<<sum(5.5,10.5)<<endl;
// different number
	cout<<"add(5,10):"<<add(5,10)<<endl;
    cout<<"add(5,10,15):"<<add(5,10,15)<<endl;
// different sequence of parameters
	cout<<"addition(10,2):"<<addition(5,10.5)<<endl;
    cout<<"addition(10.2,12.5):"<<addition(5,10.5)<<endl;
	return 0;
}
