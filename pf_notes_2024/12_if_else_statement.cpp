#include <iostream>
using namespace std;
int main(){
	float total,obt;
	float per;
	cout<<"total marks:";
	cin>>total;
	cout<<"obtained marks:";
	cin>>obt;
	if(total>=obt){
		per=(obt/total)*100;
		cout<<"percentage is:"<<per<<"%"<<endl;
	}else{
		cout<<"error in input values of total or obtained marks!";
	}
	
	if(per>=90){
		cout<<"grade A";
	}else if(per>=80 && per<=89.9){
		cout<<"grade B";
	}else if(per>=70 && per<=79.9){
		cout<<"grade C";
    }else if(per>=60 && per<=69.9){
		cout<<"grade D";
	}else if(per>=40 && per<=59.9){
		cout<<"grade E";
	}else if(per<40){
		cout<<"grade F";
	}
	return 0;
}
