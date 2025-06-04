#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    int roll_no;

    public:
    student(){
        this->name="NULL";
        this->roll_no=0;
    }
    student(string name,int roll_no){
        this->name=name;
        this->roll_no=roll_no;
    }
    void set(string name,int roll_no){
        this->name=name;
        this->roll_no=roll_no;
    }

    void show(){
        cout<<this->name<<this->roll_no<<endl;
    }
};
int main(){
    student s1("chen",32);
    // s1.set("chen",32);

    student s2=s1;
    s1.show();
    s2.show();

    // s1.set("maggie",23);
    s2.set("david",45);

    s1.show();
    s2.show();
    return 0;
}