#include <conio.h>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    // example 1
    unsigned nmbr_of_elts;
    unsigned i;
    char choice;
    int *ip;
    cout << "\nEnter the number of elements ";
    cin >> nmbr_of_elts;
    ip = (int *)malloc(nmbr_of_elts * sizeof(int)); //create a dynamic array
    for (i=0;i<nmbr_of_elts;i++) //fill array with values
    *(ip + i) = i + 100;
    for (i=0;i<nmbr_of_elts;i++) //display array
    cout << "\n value at "<<i<<" = "<<ip[i];
    return 0;

    // example 2
    unsigned nmbr_of_elts;
    unsigned i;
    char choice;
    int *ip;
    cout << "\nEnter the number of elements ";
    cin >> nmbr_of_elts;
    ip = (int *)malloc(nmbr_of_elts * sizeof(int));
    do{
        cout << "\n which element to input or edit [0 .. "<<nmbr_of_elts-1<<"]? ";
        cin >> i;
        cout << "\n enter the integer value for element:"<<i<<"?";
        cin >> *(ip + i);
        cout << "\n do you want to input more or edit elements ";
        choice = toupper(getch());
    }
    while(choice != 'N');
    for (i=0;i<nmbr_of_elts;i++)
    cout << "\n at " << i << " " << ip[i];
    getch();
    return 0;
}