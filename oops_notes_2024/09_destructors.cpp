#include <iostream>
using namespace std;
class person{
	private:
		int age;
		double height;
	public:
		person() : age(0),height(0){
			cout<<"i am no arg constructor of dynamic obj"<<endl;
		}
		person(int a,double h) : age(a),height(h){
			cout<<"i am two arg constructor of dynamic obj"<<endl;
		}
		// In C++, destructors are special member functions of a class that are used to release resources, clean up memory, and perform any necessary cleanup operations when an object is destroyed or goes out of scope.
		// Destructor 
		~person(){
			cout<<"I am a destructor"<<endl;
		}

		void show(){
			cout<<"age of person:"<<age<<endl;
			cout<<"height of person:"<<height<<endl;
			cout<<endl;
		}
};
int main(){

    person *p1 = new person; // Creating a dynamic object using the no-arg constructor
    person *p2 = new person(19, 5.11); // Creating a dynamic object using the two-arg constructor
     
	p1->show(),p2->show();
	cout<<endl;

    // Deleting the dynamically allocated objects
    delete p1;
    delete p2;

	return 0;
}
// Destructors are useful when a class manages resources other than memory, such as file handles, network connections, or any other external resources.
// They allow you to perform cleanup operations before the object is destroyed and resources are released

// there can only one destructor of a class.it will free up the allocated space of all construtors of that class
// It prints a message when an object of the person class is destroyed.
// When main() is executed, objects p1 and p2 are created, and their respective constructors are called.
// When main() finishes, the objects go out of scope, and their destructors are automatically called.