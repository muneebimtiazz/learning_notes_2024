#include<iostream>
using namespace std;
struct student{
	int rollNo;
	string name;
	int marks;
};
void ex_mark(student *sptr);
void display(student *sptr);

int main(){
	student s1={69,"thomas",77};
	student s2={63,"muhammad",81};
    ex_mark(&s1);
    ex_mark(&s2);
    display(&s1);
    display(&s2);

	return 0;
}
void ex_mark(struct student *sptr){
    (sptr->marks)++;
}
void display(student *sptr){
    cout<<"rollno:"<<sptr->rollNo<<" name:"<<sptr->name<<" marks:"<<sptr->marks<<endl;
}

