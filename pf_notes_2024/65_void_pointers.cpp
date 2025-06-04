//If we have a pointer to an int, then it would be incorrect to assign the address of a float variable to it. However, an exception to this rule is a pointer to void. A pointer to void is a generic multipurpose pointer that can point to any data type eg:int,char,float etc.the syntax declaration of void pointers is->  void *vptr;

#include<iostream>
using namespace std;
int main(){
    int a=3,*iptr;
    float b=3.3,*fptr;
    void *vptr;

    // fptr=&a; //we cant store the address of an integer in a float pointer
    // iptr=&b; //similarly we cant store the address of a float variable in a int pointer
    
    vptr=&a;
    cout<<"holds the address of a:"<<vptr<<endl;
    vptr=&b; //updated
    cout<<"now holds the address of b:"<<vptr<<endl;

    //dereferencing of void pointers
    //cout<<*(vptr)<<endl;  //error:we can't dereferenced a void pointer we first need to typecast the voidpointer.for typcasting we have to see whose value vptr hold.is it a float or int etc.currently vptr holds the address of b.b is a float.so we need to typecast vptr to float.to dereferenced it.   

    cout<<"dereferencing of vptr"<<*(float *)vptr<<endl;  //(float *) for typecasting.left most asterisk *dereference operator
    return 0;
}