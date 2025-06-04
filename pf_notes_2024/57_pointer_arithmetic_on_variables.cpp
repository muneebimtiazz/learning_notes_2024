// all arithmetic is performed relative to the size of base type of pointer.

// According to pointer arithmetic, when a pointer variable is incremented, it points to the next location of its base type.
#include <iostream>
using namespace std;
int main(){
	int a=9;
	float b=4.5;
	char c='a';

	int *iptr=&a;
	float *fptr=&b;
	char *cptr=&c;

	cout<<"old value of iptr=adress of a:"<<iptr<<endl; 
	cout<<"old value of fptr=adress of b:"<<fptr<<endl;
	cout<<"old value of cptr=adress of c:"<<(void *)cptr<<endl; //need to cast to void* for char pointer

    iptr++;//&a + sizeof(int)
    fptr--;//&b - sizeof(float)
    cptr=cptr+3;//&c + 3*sizeof(char)

    cout<<"new value of iptr:"<<iptr<<endl;
    cout<<"new value of fptr:"<<fptr<<endl;
    cout<<"new value of cptr:"<<(void *)cptr<<endl; //need to cast to void* for char pointer
    //So, when you write (void *)cptr, you're explicitly telling the compiler to treat cptr as a generic memory address and not attempt to interpret it as a string.

	return 0; 
}

