//also known as modes of inheritance

//more information:google search inheritance access specifier table
//https://www.learncpp.com/cpp-tutorial/inheritance-and-access-specifiers/

#include<iostream>
using namespace std;
class base{
	private:
		int num; // Accessible only within the class
	protected:
		string name; // Accessible within the class and derived classes
	public:
		char symbol; // Accessible everywhere

		void print(){
			cout<<num<<","<<name<<","<<symbol<<endl;
		}
		base() : num(5),name("chen"),symbol('#'){
			cout<<"i am a constructor"<<endl;
		}

};

class derived1:private base{
	public:
		void printData(){
			// Accessing the print function indirectly through the derived class
			print();
		}
};
class derived2:protected base{
	public:
		void printData(){
			// Accessing the print function indirectly through the derived class
			print();
		}
};
class derived3:public base{
	public:
		void printData(){
			// Accessing the print function indirectly through the derived class
			print();
		}
};
int main(){
	base b1; 
	// derived d1;
	b1.print();
	// d1.printData();

	cout << "Public Inheritance:" << endl;
    derived3 d3;
    d3.printData();  // Accessing printData, which indirectly calls the print function from Base

    cout << "\nProtected Inheritance:" << endl;
    derived2 d2;
    d2.printData();  // Accessing printData, which indirectly calls the print function from Base

    cout << "\nPrivate Inheritance:" << endl;
    derived1 d1;
    d1.printData();  // Accessing printData, which indirectly calls the print function from Base

}

/*
Public Inheritance:
When you inherit a class publicly, the public members of the base class remain public in the derived class, and the protected members of the base class become protected members in the derived class. Private members of the base class remain inaccessible in the derived class.
eg.class Derived : public Base{};

Protected Inheritance:
When you inherit a class as protected, the public and protected members of the base class become protected members in the derived class. Private members of the base class remain inaccessible in the derived class.
eg.class Derived : protected Base{};

Private Inheritance:
When you inherit a class as private, all members of the base class become private members in the derived class, regardless of their access specifiers in the base class. This means that you can't directly access any members of the base class from outside the derived class.
eg.class Derived : private Base{};
*/