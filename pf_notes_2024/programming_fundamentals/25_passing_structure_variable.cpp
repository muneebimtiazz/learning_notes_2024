#include<iostream>
using namespace std;
struct student{
	int rollNo;
	string name;
	int marks;
	double percentage;
};

void display(student ss){
	cout<<"rollno:"<<ss.rollNo<<" name:"<<ss.name<<" marks/100:"<<ss.marks<<" percentage:"<<ss.percentage<<endl;
}
int main(){
	student s1={69,"thomas",77,83.35};
	student s2={63,"muhammad",81,87.73};

    display(s1);
    display(s2);

	return 0;
}


