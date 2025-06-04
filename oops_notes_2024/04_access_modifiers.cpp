// accessmodifiers/access specifiers:They determine how the members of a class can be accessed from outside the class

// ->private:Members declared as private are only accessible within the class. They cannot be accessed directly by objects of the class or external code.
// ->public:Members declared as public are accessible from anywhere, both within the class and outside the class.
// ->protected:Members declared as protected are similar to private members but with an additional feature. They are accessible within the class and by derived classes.eg members of parent class can only be accessed by child class. it cannot be directly accessed from outside the class or its derived classes.

// by default the access modifier in class is private

#include<iostream>
using namespace std;
class building{
    int areaLand;

    protected:
    string protectedInfo; //To set the value of protectedInfo in the room class, you should use a public method or a constructor in the building class to set the value. 

    public:
    string location;
    float price;

    void setProtectedInfo(const string& info) {
        protectedInfo = info;
    }
};
class room:public building{
	public:
		void access(){
			cout<<"I have the access of a room in this building"<<endl;
            cout<<"Protected Info: "<<protectedInfo<<endl;
		}
};
int main(){
    building b1;

    // cout<<"areaLand:"<<b1.areaLand;  //private member, cannot be accessed directly
    // cout<<"protected Info:"<<protectedInfo;  //protected member, cannot be accessed directly
    cout<<"location:"<<b1.location<<endl;  //most compilers show garbage value because we haven't set anything
    b1.location="tokyo"; 

    cout<<"location:"<<b1.location<<endl;  

    room r1;
    // r1.areaLand; //private member, cannot be accessed directly
    r1.setProtectedInfo("This land is cursed"); //protected member,only accessible using member functions
    r1.location = "Living Room";
    r1.price = 1000.0;
    
    r1.access();
    
	return 0;
}

/*
In your building class, areaLand is declared as private, which means it cannot be accessed directly from the child class room. Only member functions of the building class itself can access areaLand.
On the other hand, protectedInfo is declared as protected. In C++, protected members are accessible in the derived class. Therefore, the room class, being a derived class of building, can access protectedInfo using a member function or a constructor in the building class.
Finally, location and price are declared as public members of the building class. Public members can be accessed directly by the derived class, so the room class can access both location and price without the need for any specific member function.
*/