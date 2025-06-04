#include <iostream>
#include <iomanip>
// To access manipulators, the file iomanip.h should be included in the program.
using namespace std;
int main(){
// Manipulators are operators that are used to format the data display.

    // setw manipulator
	long pop1=1748691,pop2=27348,pop3=346783;
	
	 cout<<setw(12)<<"LOCATION"<<setw(14)<<"POPULATION"<<endl
	    <<setw(12)<<"Lahore"<<setw(14)<<pop1<<endl
		<<setw(12)<<"Rawalpindi"<<setw(14)<<pop2<<endl
		<<setw(12)<<"Murike"<<setw(14)<<pop3<<endl;
	return 0;
}

/*
1] Parameterized Manipulators:-
Manipulator               ->          Meaning
setw (int n)->To set field width to n
setprecision (int p)->The precision is fixed to p
setfill (Char f)->To set the character to be filled
setiosflags (long l)->Format flag is set to l
resetiosflags (long l)->Removes the flags indicated by l
Setbase(int b)->To set the base of the number to b

2] Non-parameterized
Examples are endl, fixed, showpoint and flush.
• endl – Gives a new line
• ends – Adds null character to close an output string
• flush – Flushes the buffer stream
• ws – Omits the leading white spaces present before the first field
• hex, oct, dec – Displays the number in hexadecimal or octal or in decimal format
*/
