#include<iostream>
using namespace std;
class car{
    private:
	string name;
	int modelNumber;
	double cost;

    public:
    // parameterized constructor
    car(string n,int m,double c) : name(n),modelNumber(m),cost(c){
		cout<<"i am a constructor"<<endl;
	}
    // explicitly defined copy constructor
// It’s a one argument constructor whose argument is an object of the same class as the constructor. It takes one parameter, which is the object you want to copy. This parameter is usually marked as "const" to make sure the original object isn't changed while copying.
    car(const car& other) : name(other.name),modelNumber(other.modelNumber),cost(other.cost){
        cout<<"i am a copy constructor"<<endl;
    }

// If you don't explicitly define a copy constructor for your class, C++ will generate a default copy constructor for you.

    void show(){
        cout<<"car name:"<<name<<endl;
		cout<<"model number:"<<modelNumber<<endl;
		cout<<"cost:"<<cost<<endl;
    }

};
int main(){
    car objCar1("honda",1636,25500.00);
    car objCar2("toyota",2344,27050.54);
    
    car objCar3=objCar1; //use copy constructor to create objCar3 as a copy of objCar1
    cout<<endl;

    // display 
	objCar1.show();
	objCar2.show();
	objCar3.show();
    	return 0;
}

/*
note:
The default copy constructor is suitable for classes with simple data members like integers, floats, and pointers to built-in types. However, it may not work correctly for classes with dynamically allocated resources or complex objects.
*/

