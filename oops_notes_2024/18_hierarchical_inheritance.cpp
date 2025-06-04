#include <iostream>
#include <string>
using namespace std;
class employee{
	private:
		string name;
		int id;
		double salary;
	public:
		void getData(){
			cout<<"enter name of employee:";
			cin>>name;
			cout<<"enter id of employee:";
			cin>>id;
			cout<<"enter salary of employee $:";
			cin>>salary;
		}
		void printData(){
			cout<<"name of employee:"<<name<<endl;
			cout<<"id of employee:"<<id<<endl;
			cout<<"salary of employee $:"<<salary<<endl;
		}	
};
class manager:public employee{
	private:
		string post;
		int joined;
	public:
		void getData(){
			employee::getData();
			cout<<"enter post of manager:";
			cin>>post;
			cout<<"enter joined date:";
			cin>>joined;
		}
		void printData(){
			employee::printData();
			cout<<"post of manager:"<<post<<endl;
			cout<<"joined company from:"<<joined<<endl;
		}
};
class writer:public employee{
	private:
		int no;
		char article[50];
	public:
		void getData(){
			employee::getData();
			cout<<"enter number of publications last year:";
			cin>>no;
			cout<<"enter last article name:";
			cin.getline(article,50);
		}
		void printData(){
			employee::printData();
			cout<<"number of publications last year:"<<no<<endl;
			cout<<"last article name"<<article<<endl;
		}
};
void style();  //function prototype

int main(){
	manager m1,m2;
	writer w1;

	cout<<"enter details of manager #1:"<<endl;
	m1.getData();
	cout<<"enter details of manager #2:"<<endl;
	m2.getData();
	cout<<"enter details of writer:"<<endl;
	w1.getData();
	style();
	cout<<"details of manager #1:"<<endl;
	m1.printData();
	cout<<"details of manager #2:"<<endl;
	m2.printData();
	cout<<"details of writer:"<<endl;
	w1.printData();

	return 0;	
}
//function declaration
void style(){
	cout<<endl;
	for(int i=0;i<45;i++){
		cout<<"*";
	}
	cout<<endl;
}



