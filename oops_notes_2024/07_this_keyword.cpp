// When a member function is called on an object, the this pointer points to the address of that object.
#include<iostream>
using namespace std;
class car{
    private:
    int x;
	string name;
	int modelNumber;
	double cost;

    public:
    // use1:The this pointer is used to differentiate between the member variables (name, modelNumber, cost) and the parameters with the same names passed to the function.
    void set(string name,int modelNumber,double cost){
        // car *e = this;  // Assigning the current object's address to the pointer.Now 'e' points to the same object as 'this'.
        // e->name;
        this->name=name;
	    this->modelNumber=modelNumber;
	    this->cost=cost;

        cout<<",address of this:"<<this<<endl;
    }
    // use2:This allows you to chain multiple function calls on the same object in a single statement.
    car& setX(int x){
        this->x = x;
        return *this;
    }
    void show(){  
        cout<<"X:"<<this->x<<endl;

        cout<<"car name:"<<this->name<<endl;
		cout<<"model number:"<<this->modelNumber<<endl;
		cout<<"cost:"<<this->cost<<endl;
    }
};
int main(){
    car objCar;

    cout<<"address of object same as this:"<<&objCar;

    // objCar.set("honda",1636,25500.00).show(); //method chaining Not possible
    objCar.set("honda",1636,25500.00);
    objCar.setX(113).show();  //method chaining

	return 0;
}

// Note:this keyword only use in non static member functions