// all arithmetic is performed relative to the size of base type of pointer.

#include <iostream>
using namespace std;
int main(){
	int a=9;
	float b=4.5;
	char c='a';

	int *iptr=&a;
	float *fptr=&b;
	char *cptr=&c;

	cout<<"old value of *iptr=value in a:"<<*iptr<<endl; 
	cout<<"old value of *fptr=value in b:"<<*fptr<<endl;
	cout<<"old value of *cptr=value in c:"<<*cptr<<endl;

    (*iptr)++;
    (*fptr)--;
    (*cptr)--; //decrement the ASCII value of the character pointed to by cptr (character 'a') by 1

    cout<<"new value of iptr:"<<*iptr<<endl;
    cout<<"new value of fptr:"<<*fptr<<endl;
    cout<<"new value of cptr:"<<*cptr<<endl;

	return 0; 
}

// In C++, both the dereference operator (*) and the increment/decrement operators (++ and --) have the same precedence level, but their associativity is from right to left.
/*
a= *iptr++;
a=*++iptr;
a=++*iptr;
a=(*iptr)++;
*/
