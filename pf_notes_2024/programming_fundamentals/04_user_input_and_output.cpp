#include <iostream>
using namespace std;
int main() { 
	int age;
	char currency;
	string name;
	
//	integer input
	cout<<"enter your age please!: "<<endl;
	cin>>age;
	cout<<"so you are "<<age<<" years old"<<endl;

//	string input
	cout<<"Now enter your name: "<<endl;
	getline(cin,name,'$');  

//	character input
	cout<<"Enter a currency symbol:"<<endl;
	cin>>currency;
	cout<<"you have 19"<<currency<<" only";
	
//  Taking multiple inputs or outputs
    char a;
    int num;
    cout<<"Enter a character and an integer: ";
    cin>>a>>num;
    cout<<"Character: "<<a<<","<<"Number: "<<num<<endl;

    return 0;
}