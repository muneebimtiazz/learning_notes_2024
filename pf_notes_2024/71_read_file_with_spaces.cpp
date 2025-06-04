#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main(){
    char ch;
    ifstream fin; 
    fin.open("myfile.dat");
    ch=fin.get();
    
    if (!fin.is_open()) {
        cout << "Error opening file!" << endl;
        return -1;
    }

    while(!fin.eof()){
        cout<<ch;
        ch=fin.get();
    }
    fin.close();

    return 0;
}