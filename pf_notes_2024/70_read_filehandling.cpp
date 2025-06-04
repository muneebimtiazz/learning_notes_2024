#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main(){
    //reading one character from file
    char ch;
    ifstream fin;
    fin.open("myfile.dat"); 
    if (!fin.is_open()) {
        cout << "Error opening file!" << endl;
        return -1;
    } 
    fin>>ch;
    cout<<ch<< endl;
    getch();

    //reading everything without spaces from file
    while(!fin.eof()){
        cout<<ch;
        fin>>ch;
    }
    cout<<endl;
    fin.close();

    return 0;
}

