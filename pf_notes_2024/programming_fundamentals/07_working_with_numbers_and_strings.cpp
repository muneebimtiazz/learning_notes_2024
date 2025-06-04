#include<iostream>
#include<cmath>  //for library functions
#include<string>
using namespace std;
int main(){
// working with numbers
	int num=6;
	double dnum=6.6;
    //	cout<<dnum<<endl;
	cout<<10/3<<endl;
    //	int int = int
    //	dou dou = dou
    //	int dou = dou
	
	cout<<10.0/3.0<<endl;
	cout<<pow(2,3)<<endl;
	cout<<sqrt(25)<<endl;
	cout<<round(3.5)<<endl;
	cout<<ceil(4.1)<<endl;
	cout<<floor(4.8)<<endl;
	cout<<fmax(1,8)<<endl;


// working with strings
	string sentence="have a good day";
	cout<<sentence.size()<<endl;
	cout<<sentence[7]<<endl;
	cout<<sentence.find("good",0)<<endl;
	cout<<sentence.substr(7,4)<<endl;
	return 0;
}
