#include<iostream>
using namespace std;
void func(int *a,int s){
    cout<<"after: "<<endl;
    for(int i=0;i<s;i++){
        // Do something with each element, for example, multiply with 2
        a[i]=a[i]*2;
        cout<<a[i]<<" ";
    }
}
int main(){
    const int size=5;
    int arr[size]={5,10,15,20,25};

    cout<<"before: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    func(arr,size); //function calling
    return 0;
}