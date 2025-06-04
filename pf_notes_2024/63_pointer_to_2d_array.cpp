#include <iostream>
using namespace std;
int main(){
    int i;
    int arr[3][4]={{10,11,12,13},{20,21,22,23},{30,31,32,33}};
    int (*ptr)[4];

    ptr=arr;

    cout<<"Addresses: "<<ptr<<" "<<ptr+1<<" "<<ptr+2<<endl;
    cout<<"Same: "<<*ptr<<" "<<*(ptr+1)<<" "<<*(ptr+2)<<endl;
    cout<<"values: " <<*(*ptr)<<" "<<*(*(ptr+1))<<" "<<*(*(ptr+2))<<endl;
    // cout <<"values:"<< ptr[0][0] << " " << ptr[1][2] << " " << ptr[2][3] <<endl;

    return 0;
}
