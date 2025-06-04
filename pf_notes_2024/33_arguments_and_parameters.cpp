#include <iostream>
using namespace std;
/*Parameters are variables declared in the signature or declaration of a function.
Parameters act as local variables within the function's scope. This means they are only accessible and valid within the function in which they are defined.
Parameters also have names, which are used as identifiers within the function*/
void sayMyName(string name,int age=18){   //age has a default value called default parameter
	cout<<"hello!this is "<<name<<".Nice to meet you."<<endl;
	cout<<"I am "<<age<<" years old."<<endl;
}
int main(){
	cout<<"top......."<<endl;
/*The arguments which are mentioned in the function call are known as actual arguments, since these are the values which are actually sent to the called function. Actual arguments
can be written in the form of variables, constants or expressions or any function call that returns a value.
The order, number and type of the arguments provided by the caller must correspond to the order, number and type of the parameters declared in the function*/
	sayMyName("thomas");  //uses default value for "age"
	sayMyName("muhammad",33); //overrides default value of "age"
	sayMyName("chen",45);
	cout<<"bottom......"<<endl;
	
	return 0;
}

/*types of functions
1. Functions with no arguments and no return value.
2. Functions with no arguments and a return value.
3. Functions with arguments and no return value.
4. Functions with arguments and a return value.*/