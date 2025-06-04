// virtual_functions_accessed_with_pointers
//	or
// pointers_to_derived_class
#include <iostream>
using namespace std;
class tripPlan{			//abstract class
	public:
		virtual void fun(){   //virtual function
            cout<<"enjoy life in your own way"<<endl;
        };
};
class optionOne:public tripPlan{
	public:
		void fun(){
			cout<<"we are going to a hill station"<<endl;
		}
};
class optionTwo:public tripPlan{
	public:
		void fun(){
			cout<<"we are going to amusement park"<<endl;
		}
};

int main(){
	tripPlan *tripPlanPtr; //pointer of base class(tripPlan)
	optionOne familyOne; //obj of derived class(optionOne)
	optionTwo familyTwo; //obj of derived class(optionTwo)


	tripPlanPtr=&familyOne; //point the base class pointer to the first derived class object
    tripPlanPtr->fun(); //calls the overridden function in optionOne
	tripPlanPtr=&familyTwo; //point the base class pointer to the second derived class object
	tripPlanPtr->fun(); //calls the overridden function in optionTwo

	
    return 0;
}
//you cannot create objects of the abstract class directly.
//However, you can create pointers or references of the abstract class type.
//This allows you to use polymorphism and treat objects of derived classes as objects of the abstract class.


