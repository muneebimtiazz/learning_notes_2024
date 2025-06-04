// more information:https://www.geeksforgeeks.org/inheritance-in-c/

#include <iostream>
#include <string>
using namespace std;
class animal{
	private:
	protected:
	public:
		void walk(){
			cout<<"walking"<<endl;
		}
		void sleep(){
			cout<<"sleeping"<<endl;
		}
		void eat(){
			cout<<"eating"<<endl;
		}
};
class dog:public animal{
	public:
		void talk(){
			cout<<"bark"<<endl;
		}
};
class cat:public animal{
	public:
		void talk(){
			cout<<"meow"<<endl;
		}
};
class bear:public animal{
	public:
		void talk(){
			cout<<"growl"<<endl;
		}
};
int main(){
	dog bulldog;
	cat persiancat;
	bear polarbear;
	
	cout<<"bulldog is ";
	bulldog.walk();
	cout<<"bulldog sound ";
	bulldog.talk();

	cout<<"polarbear is ";
	polarbear.sleep();
	cout<<"polarbear sound ";
	polarbear.talk();

	cout<<"persiancat is ";
	persiancat.eat();
	cout<<"persiancat sound ";
	persiancat.talk();
	return 0;	
}


/*TYPES OF INHERITANCE
Single Inheritance.
Multiple Inheritance.
Multilevel Inheritance.
Hierarchical Inheritance.
Hybrid Inheritance.*/




