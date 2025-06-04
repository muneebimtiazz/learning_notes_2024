#include<iostream>
using namespace std;
struct student{
	int rollNo;
	string name;
	int marks;
	double percentage;
	// char grade='A';
// This is invalid because there is no variable called grade, and no memory is allocated for structure definition.
};
int main(){
	// initializing structure members
	student s1={69,"thomas",77,83.35};
	student s2={63,"muhammad",81};
// If the number of initializers is less than the number of members then the remaining members are initial with zero.
	
	cout<<"rollno:"<<s1.rollNo<<" name:"<<s1.name<<" marks/100:"<<s1.marks<<" percentage:"<<s1.percentage<<endl;
	cout<<"rollno:"<<s2.rollNo<<" name:"<<s2.name<<" marks/100:"<<s2.marks<<" percentage:"<<s2.percentage<<endl;
	return 0;
}

