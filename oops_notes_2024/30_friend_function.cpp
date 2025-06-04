#include<iostream>
using namespace std;
class car{
    private:
	string name;
	int modelNumber;
	double cost;

    public:
    void set(string name,int modelNumber,double cost){
        this->name=name;
	    this->modelNumber=modelNumber;
	    this->cost=cost;
    }
	void get(){
		cout<<"enter car name:"<<endl;
        cin>>name;
		cout<<"enter model number:"<<endl;
        cin>>modelNumber;
		cout<<"enter cost:"<<endl;
        cin>>cost;
	}
    // Declaration of friend function
    friend void displayCar(const car &obj); // They are not part of the class but are given permission to access the class's private stuff.
};

// Definition of friend function
void displayCar(const car &obj){
    cout<<"Car name:"<<obj.name<<endl;
    cout<<"Model number:"<<obj.modelNumber<<endl;
    cout<<"Cost:"<<obj.cost<<endl;
}

int main(){
    car objCar1,objCar2;

    objCar1.set("honda",1636,25500.00);
    objCar2.get();

    cout<<"Details of Car 1:"<<endl;
    displayCar(objCar1);

    cout<<"Details of Car 2:"<<endl;
    displayCar(objCar2);

	return 0;
}

