#include <iostream>
using namespace std;
class person{
	private:
		int age;
		double height;
	public:
		person() : age(0),height(0){
			cout<<"i am no arg constructor"<<endl;
		}
		person(int a,double h) : age(a),height(h){
			cout<<"i am two arg constructor"<<endl;
		}
		void show(){
			cout<<"age of person:"<<age<<"\n height of person:"<<height<<endl;
		}
};
int main(){
	person p1; 
	person p2(31,6.1);

	p1=p2;
    // this happens when we use assigment operator between two different objects of same class
    // p1.age=p2.age;
    // p1.height=p2.height;
     
	p1.show(),p2.show();
	cout<<endl;

	return 0;
}
