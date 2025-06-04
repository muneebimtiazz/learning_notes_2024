// declaring,defining,assessing a structure
#include<iostream>
using namespace std;
// Data Member: These members are normal C++ variables.
// Member Functions: These members are normal C++ functions.

// structure declarations
struct car{
    // structure members
	string name;
	int modelNumber;
	double cost;

	// structure functions
	void printData(){
		cout<<"car name:"<<name<<endl;
		cout<<"model number:"<<modelNumber<<endl;
		cout<<"cost:"<<cost<<endl;
	}
};
int main(){
	// defining a structure variable
    car c1,c2;

	// give values to structure members
	c1.name="tesla";
	c1.modelNumber=7645;
	c1.cost=45000.00;
	c2.name="honda";
	c2.modelNumber=1636;
	c2.cost=25500.00;

	// display structure members
	c1.printData();
	c2.printData();
	return 0;
}

/*
// combining,declaring and definition
#include<iostream>
using namespace std;
// structure declarations
struct car{
    // structure members
	string name;
	int modelNumber;
	double cost;
}c1,c2; // defining a structure variable
int main(){
	// give values to structure members
	c1.name="tesla";
	c1.modelNumber=7645;
	c1.cost=45000.00;
	c2.name="honda";
	c2.modelNumber=1636;
	c2.cost=25500.00;

	// display structure members
	cout<<c1.name;
	cout<<c2.name;
	return 0;
}
*/