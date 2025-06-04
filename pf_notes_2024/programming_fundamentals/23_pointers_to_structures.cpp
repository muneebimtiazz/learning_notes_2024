#include<iostream>
using namespace std;
struct student{
	int rollNo;
	string name;
	int marks;
	double percentage;
};
int main(){
	student s1={69,"thomas",77,83.35};
	student s2={63,"muhammad",81,87.73};

// Declare pointers to 'student' structure and initialize them with the addresses of s1 and s2
    student *ptr = &s1;
    student *pptr=&s2;

// There are two ways of accessing the members of structure through the structure pointer.
    cout<<"rollNo:"<<ptr->rollNo<<" ";
    cout<<"name:"<<ptr->name<<" ";
    cout<<"marks:"<<ptr->marks<<" ";
    cout<<"percentage:"<<ptr->percentage<<" "<<endl;

    cout<<"rollNo:"<<(*pptr).rollNo<<" ";
    cout<<"name:"<<(*pptr).name<<" ";
    cout<<"marks:"<<(*pptr).marks<<" ";
    cout<<"percentage:"<<(*pptr).percentage<<" "<<endl;
	
	return 0;
}

