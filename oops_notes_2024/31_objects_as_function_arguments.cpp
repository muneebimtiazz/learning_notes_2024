#include<iostream>
using namespace std;

class car{
    private:
	string name;
	int modelNumber;
	double cost;

    public:
	
    void set(string _name,int _modelNumber,double _cost){
        name=_name;
	    modelNumber=_modelNumber;
	    cost=_cost;
    }
	void get(){
		cout<<"enter car name:"<<endl;
        cin>>name;
		cout<<"enter model number:"<<endl;
        cin>>modelNumber;
		cout<<"enter cost:"<<endl;
        cin>>cost;
	}
    void show(){
        cout<<"car name:"<<name<<endl;
		cout<<"model number:"<<modelNumber<<endl;
		cout<<"cost:"<<cost<<endl;
    }
     // Function to display car details by passing a car object as an argument
    static void displayCarDetails(const car& c){
        cout<<"Car Details (from function argument):"<<endl;
        cout<<"Car name: "<<c.name<<endl;
        cout<<"Model number: "<<c.modelNumber<<endl;
        cout<<"Cost: "<<c.cost<<endl;
    }

};
int main(){ 
    car objCar1,objCar2;

    objCar1.set("honda",1636,25500.00);
    objCar2.get();
    cout<<endl;

   
	objCar1.show();
	objCar2.show();

    // Display car details using a function that takes a car object as an argument
    car::displayCarDetails(objCar1);
    car::displayCarDetails(objCar2);

	return 0;
}


