#include<iostream>
using namespace std;
class team{
    private:
        static int squadMembers;  
    public:
    // Constructor is used for creating instances and can perform other tasks, but it should not initialize static members.
        void print(){
            cout<<squadMembers;
        } 
    // Public static member function to modify squadMembers
    static void setSquadMembers(int members){
        squadMembers=members;
    }// To allow modifications from outside the class, you should declare the variable as public or provide a public static member function within the class to modify it.

};
int team::squadMembers=15; // So, when you see "Static data variable declaration and initialization," it means defining the variable within the class, specifying its type and name, and providing its initial value outside of the class. This process ensures that all instances of the class share the same initial value for the static member variable.
int main(){
    team t1,t2;
    t1.print();
    t2.print();
     

    // t1.squadMembers=17; // error->only access it using the class name,not an instance of the class 
    // team::squadMembers=17; //error->You should modify the private static data variable at the global scope, not within the main function.

    // Using the public static member function to modify squadMembers
    team::setSquadMembers(17);

    t2.print();
    return 0;
}