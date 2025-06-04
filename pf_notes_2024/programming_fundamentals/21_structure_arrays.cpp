#include<iostream>
using namespace std;
struct student{
    string name;
	int rollNo;
	int marks;
	double percentage;
};
int main(){
    student students[3];
//students is an array of 3 elements, each of which is a structure of type struct student, means each element of students has 3 members, which are name, rollno, marks and percentage.
    students[0]={"thomas",66,83,87.5};
    students[1]={"muhammad",34,84,85.0};
    students[2]={"chen",65,81,81.5};

	// cout<<"name:"<<students[0].name<<" rollno:"<<students[0].rollNo<<" marks/100:"<<students[0].marks<<" percentage:"<<students[0].percentage<<endl;
	// cout<<"name:"<<students[1].name<<" rollno:"<<students[1].rollNo<<" marks/100:"<<students[1].marks<<" percentage:"<<students[1].percentage<<endl;
	// cout<<"name:"<<students[2].name<<" rollno:"<<students[2].rollNo<<" marks/100:"<<students[2].marks<<" percentage:"<<students[2].percentage<<endl;
	
	// Use a for loop to print student details
    for(int i=0;i<3;i++){
        cout<<"name:"<<students[i].name<<" rollno:"<<students[i].rollNo<<" marks/100:"<<students[i].marks<<" percentage:"<<students[i].percentage<<endl;
    }
	
	return 0;
}