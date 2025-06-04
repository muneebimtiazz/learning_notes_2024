/*We know that pointer is a variable that can contain memory address. This pointer variable takes some
space in memory and hence it also has an address. We can store the address of a pointer variable in
some other variable, which is known as a pointer to pointer variable.*/
#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int *ptr = &a;
    int **pptr = &ptr;

    cout<<"address of a: "<<&a<<endl;
    cout<<"address of ptr: "<<&ptr<<endl;
    cout<<"value of a: "<<a<<endl;
    cout<<"value of ptr=address of a: "<<ptr<<endl;
    cout<<"value of pptr=address of ptr: "<<pptr<<endl;
    cout<<"value pointed to by ptr=value of a: "<<*ptr<<endl;
    cout<<"value pointed to by pptr=address of a: "<<*pptr<<endl;
    cout<<"value pointed to by the pointer pointed to by pptr=value of a: "<<**pptr<<endl;
    return 0;
}