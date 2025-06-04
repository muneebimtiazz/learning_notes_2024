// Standard Streams ->cin,cout,cerr
#include<iostream> //library
using namespace std;
/*The main () function is a user defined function but the name, number and type of arguments are predefined in the language. The operating system calls. the main function and maine ) returns a value of integer
type to the operating system. If the value returned is zero, it implies that the function has terminated successfully and any nonzero return value indicates an error. If no return value is specified in maine
then any garbage value will be returned automatically.*/
int main(){
// Identifiers are the unique names given to variables, functions, arrays, or other entities by the programmer
	string namePerson="muneeb";
	int agePerson=20;
/*Static variables are decla~ed by writing keyword static in front of the declaratiop.static type var_name;.A static variable is initialized only once and the value of a static variable is retained between functiOn
calls. If a static variable is not initialized then it is automatically initialized to O*/
	cout<<"My name is "<<namePerson<<'\n';
	cout<<"And "<<namePerson<<" is a boy"<<'\n';
	cout<<namePerson<<" is "<<agePerson<<" years old"<<'\n';

	cerr<<"Error: Something went wrong."<< endl; // Output an error message

    return 0;
}
//TOKENS INFO: https://www.geeksforgeeks.org/cpp-tokens/
//MORE INFO: https://blog.hubspot.com/website/c-keywords#:~:text=What%20do%20keywords%20do%20in,which%20the%20code%20is%20written.
