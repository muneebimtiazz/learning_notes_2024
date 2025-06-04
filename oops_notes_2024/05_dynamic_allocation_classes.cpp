
#include<iostream>
using namespace std;
class house{
    int areaLand;
    string location;
    float price;

    public:
    void set(int a,string l,float p){
        areaLand=a;
        location=l;
        price=p;
    }

    void show(){
        cout<<areaLand<<","<<location<<","<<price;
    }
};
int main(){
    // static allocation 
    house h1;
    h1.set(10,"lahore",34000);
    h1.show();

    // dynamic allocation
    house *h2;  //ptr of house type(object pointer)
    h2=new house;  //dynamically allocate memory in heap of size house and then stored it into that ptr

    h2->set(5,"tokyo",56000);

//one way to access
    (*h2).show();
//another way to access(arrow operator)
    h2->show();
    
	return 0;
}

