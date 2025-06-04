// we pass the arguments as reference, meaning that the function receives address of original values.
// Any operation performed on variables pa and pb inside the function body( ), will affect original values of variables a and b outside the function
#include <iostream>
using namespace std;

void disp(int* pa,int* pb);

int main(){
	int a=5,b=10;
	cout<<"before calling:"<<"a="<<a<<","<<"b="<<b<<endl;  //5,10
	//passing addresses so the receiving arguments in the function declaration should be declared of pointer type
	disp(&a,&b);  //6,9 
	cout<<"after calling:"<<"a="<<a<<","<<"b="<<b<<endl;  //6,9
	return 0;
}


void disp(int* pa,int* pb){  //int *pa,*pb;
							 //pa=&a;
							 //pb=&b;
	(*pa)++;
	(*pb)--;
	cout<<"inside function changes:"<<*pa<<","<<*pb<<endl;
}
