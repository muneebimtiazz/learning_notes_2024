#include <iostream>
using namespace std;
int main() {
    int num;
    int sum=0;
    char choice;
    do{
        cout<<"Enter a number: ";
        cin>>num;
        sum+=num;

        cout<<"Do you want to enter another number? (y/n): ";
        cin>>choice;
    }while(choice=='y' || choice=='Y');
    cout << "The sum of the numbers is: " << sum << endl;
    return 0;
}
