// we pass the arguments as values, meaning that the function receives copies of the original values.
// Any operation performed on variables m and n inside the function body( ), will not affect original variables a and b outside the function
#include <iostream>
using namespace std;

void disp(int m,int n);

int main(){
	int a=5,b=10;
	cout<<"before calling:"<<"a="<<a<<","<<"b="<<b<<endl;  //5,10
	disp(a,b);  //6,9
	cout<<"after calling:"<<"a="<<a<<","<<"b="<<b<<endl;  //5,10  
	return 0;
}


void disp(int m,int n){   //int m=a, n=b;
//	cout<<m<<n;  //5,10
	m++;  //6
	n--;  //9
	cout<<"inside function changes:"<<m<<","<<n<<endl;  //6,9
}
