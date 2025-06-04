
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main(){
    ofstream fout;
    fout.open("myfile.dat");
    fout<<"hello my name is muneeb";
    getch();
    fout.close();
    getch();
    return 0;
}
/*
Data persistance:
In programming, variables are like short-term memory that only lasts as long as the program is running. Once the program stops, the computer forgets about those variables.
But if we want to remember things even after the program is done, we use a more permanent storage place, like a hard disk. We can save our variables to a file on the hard disk using something called a "file output stream." Later, if we want to bring those variables back into our program, we use a "file input stream."
In C++, these file input and output operations are handled by objects in the Input/Output library. Objects are like tools that help us work with these files.
var->file   (output stream)
var<-file   ( input stream)
*/



