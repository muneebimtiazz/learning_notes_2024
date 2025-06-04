#include <conio.h>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    // example 1
    unsigned COLS, ROWS;
    unsigned r,c;
    char choice;
    int i;
    int *ip;
    int n;
    cout << "\nEnter the number of rows ";
    cin >> ROWS;
    cout << "\nEnter the number of columns ";
    cin >> COLS;

    ip = (int *)malloc(ROWS * COLS * sizeof(int));
    do
    {
    cout << "\n which row ";
    cin >> r;
    cout << "\n which col ";
    cin >> c;
    cout << "\n enter the integer value for element at:"<<r<<","<<c<<" ?";
    cin >> n;
    *(ip + (r*COLS+c)) = n;
    cout << "\n do you want to input more or edit elements ";
    choice = toupper(getch());
    }
    while (choice != 'N');
    for (i=0;i<(ROWS*COLS);i++)
    cout << "\n at " << i << " " << ip[i];

    return 0;

    //example 2
    unsigned COLS, ROWS;
    unsigned r,c;
    char choice;
    int i,j;
    int n=10;
    int *ip;
    cout << "\nEnter the number of rows ";
    cin >> ROWS;
    cout << "\nEnter the number of columns ";
    cin >> COLS;

    ip = (int *)malloc(ROWS * COLS * sizeof(int));
    for (i=0;i<ROWS;i++) //Fill the rows and cols of double dimension array
    for(j=0;j<COLS;j++)
    *(ip+(i*COLS+j))=n++;

    for (i=0;i<(ROWS*COLS);i++)
    cout << "\n at " << i << "="<<ip[i];

    return 0;
}