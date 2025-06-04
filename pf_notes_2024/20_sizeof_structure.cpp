#include<iostream>
using namespace std;
struct student{
	int rollNo; //4byte
	string name; //32byte
	int marks; //4byte
	double percentage; //8byte
} __attribute__((packed));
int main(){
	// initializing structure members
	student s1={69,"thomas",77,83.35};
    student s2;
	s2=s1; //We can assign values of a structure variable to another structure variable, if both variables are define from the same structure type
    cout<<"rollno:"<<s1.rollNo<<" name:"<<s1.name<<" marks/100:"<<s1.marks<<" percentage:"<<s1.percentage<<endl;
	cout<<"rollno:"<<s2.rollNo<<" name:"<<s2.name<<" marks/100:"<<s2.marks<<" percentage:"<<s2.percentage<<endl;

    // better to find the size of structure variable using sizeof operator rather sum of sizes of its members
    cout<<"size of structure: "<<sizeof(student)<<endl;

    // The members of structures are stored in consecutive memory locations
    cout<<"adress of rollNo:"<<&s1.rollNo<<endl;
    cout<<"adress of name:"<<&s1.name<<endl;
    cout<<"adress of marks:"<<&s1.marks<<endl;
    cout<<"adress of percentage:"<<&s1.percentage<<endl;

    cout<<"adress of rollNo:"<<&s2.rollNo<<endl;
    cout<<"adress of name:"<<&s2.name<<endl;
    cout<<"adress of marks:"<<&s2.marks<<endl;
    cout<<"adress of percentage:"<<&s2.percentage<<endl;
	
	return 0;
}

/*
struct size would be the sum of the sizes of its members, but the actual size might be larger due to alignment requirements imposed by the compiler.
Keep in mind that padding might be added between members to ensure proper alignment, which can affect the overall size. Additionally, the compiler may also add padding at the end of the structure to align it properly in memory.
*/