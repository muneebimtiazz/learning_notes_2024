#include<iostream>
using namespace std;
class car{
    private:
	string name;
	int modelNumber;
	double cost;

    public:
    //Setters are used to modify the values of private data members.
    void set(string n,int m,double c){
        name=n;
	    modelNumber=m;
	    cost=c;
    }
    //Getters are used to retrieve the values of private data members.
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
// there is no rule that data must be private and functons public;in some circumstances you may find you will need to use private functions and public data.
};
int main(){
    car objCar1,objCar2;

	// set values to data members using setter method
    objCar1.set("honda",1636,25500.00);

    // get values from user using getter method
    objCar2.get();
    cout<<endl;

    // display 
	objCar1.show();
	objCar2.show();
	return 0;
}

