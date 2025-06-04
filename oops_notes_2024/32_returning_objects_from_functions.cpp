#include <iostream>
using namespace std;
class car {
private:
    string name;
    int modelNumber;
    double cost;

public:
    // Constructor to initialize car objects
    car(string _name = "",int _modelNumber = 0,double _cost = 0.0){
        name=_name;
        modelNumber=_modelNumber;
        cost=_cost;
    }

    // Getter function to retrieve car details
	void get(){
		cout<<"enter car name:"<<endl;
        cin>>name;
		cout<<"enter model number:"<<endl;
        cin>>modelNumber;
		cout<<"enter cost:"<<endl;
        cin>>cost;
	}

    // Display function to show car details
    void show(){
        cout<<"car name:"<<name<<endl;
		cout<<"model number:"<<modelNumber<<endl;
		cout<<"cost:"<<cost<<endl;
    }

    // Function to create and return a new car object
    static car createCar() {
        string _name;
        int _modelNumber;
        double _cost;

        cout<<"Enter car name: ";
        cin>>_name;
        cout<<"Enter model number: ";
        cin>>_modelNumber;
        cout<<"Enter cost: ";
        cin>>_cost;

        // Create and return a new car object
        return car(_name, _modelNumber, _cost);
    }
};

int main() {
    car objCar1, objCar2;

    // Setting car details for objCar1 using the constructor
    objCar1 = car("Honda", 1636, 25500.00);

    // Getting car details for objCar2 using the get method
    objCar2 = car::createCar();
    cout << endl;

    // Displaying car details for both objects using the show method
    objCar1.show();
    objCar2.show();

    return 0;
}
