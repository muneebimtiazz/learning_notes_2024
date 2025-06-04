#include <iostream>
using namespace std;
class Person{
    public:
        string name;
        Person(string n):name(n){}
};

class Address {
    public:
        string address;
        Address(string a):address(a){}
};

class Contact:public Person,public Address{
    public:
        Contact(string n, string a):Person(n),Address(a){}
};

int main() {
    Contact contact("John Doe","123 Main St");
    cout<<"Name: "<<contact.name<< ",Address: "<<contact.address<<endl;
    return 0;
}

// example#2
// #include<iostream>
// using namespace std;
// class employee{
//     private:
// 		string name;
// 		float salary;
// 	public:
// 		employee(string n,float s):name(n),salary(s){};
// 		void printData(){
// 			cout<<"name of employee:"<<name<<"salary of employee $:"<<salary<<endl;
// 		}
// };
// class taxPayer{
//     public:
//         void status(){
//             cout<<"This person is a taxpayer."<<endl;
//     }
// };
// class taxPayingEmployee:public employee:public taxPayer{
//     public:
//         taxPayingEmployee(string n,float s):employee(n,s){}
// };
// int main(){
//     taxPayingEmployee emp("chen", 54600.65);
//     emp.printData();
//     emp.status();
//     return 0;
// }


/*

Ambiguity in Multiple Inheritance:
The most obvious problem with multiple inheritance occurs during function overriding.
Suppose, two base classes have a same function which is not overridden in derived class.
If you try to call the function using the object of the derived class, compiler shows error. It's because compiler doesn't know which function to call*/

/*This problem can be solved using the scope resolution function to specify which function to class either */