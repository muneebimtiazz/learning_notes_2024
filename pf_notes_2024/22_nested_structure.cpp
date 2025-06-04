#include<iostream>
using namespace std;
// In C++, when using nested structs, the compiler needs to know about the nested struct types before they are used. 
// Forward declarations
// struct address;
// struct department;

// It seems that forward declarations alone are not sufficient in this case because the nested structs address and department are used inside the employee struct.
// To fix this issue, you can define the nested structs address and department before the employee struct like this:


struct address{
    string location;
    int areaZip;
};
struct department{
    string departmentName;
    string departmentPost;
};
struct employee{
    int id;
    string name;
    address addr;
    department depart;
};

int main(){
    // Declare an array of employee structures
    employee emp[2];
    // Initialize employee 1
    emp[0]={23,"chen",{"Yurakucho, Chiyoda-ku, Tokyo",3453},{"Information technology","HR"}};
    // Initialize employee 2
    emp[1]={12,"thomas",{"9982 South Hill Rd.Brooklyn, NY",11225},{"Finance","finance controller"}};

    for(int i=0;i<2;i++){
        cout<<"Employee "<<i + 1<<" Details:"<<endl;
        cout<<"Employee ID: "<<emp[i].id<< endl;
        cout<<"Employee Name: "<<emp[i].name<<endl;
        cout<<"Address: "<<emp[i].addr.location<<", Zip Code: "<<emp[i].addr.areaZip<<endl;
        cout<<"Department: "<<emp[i].depart.departmentName<<", Post: "<<emp[i].depart.departmentPost<<endl;
        cout<<"-------------------------"<<endl;
    }
    return 0;
}