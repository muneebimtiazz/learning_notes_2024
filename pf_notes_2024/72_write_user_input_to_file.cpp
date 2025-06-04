#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main(){
    ofstream fout;
    fout.open("myfile.dat");

    cout << "Enter text (terminate with Ctrl+Z on Windows or Ctrl+D on Unix-like systems):\n";
    string userInput;
    while (getline(cin, userInput)) {
        fout << userInput << endl;
    }
    fout.close();

    getch();
    return 0;
}
