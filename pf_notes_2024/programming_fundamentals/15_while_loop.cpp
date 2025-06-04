#include <iostream>
#include <cmath>
using namespace std;
int main(){
	// sum of first and last digit of a number
	int num,first,last;
	cout<<"Enter a number : ";
	cin>>num;
	
	last=num%10;
/*The loop body, which consists of braces delimiting several statements, 
is called a block ofcode. One important aspect of a block is that a variable 
defined inside the block is not visible outside it*/
	
	while(num>=9){
		num=num/10;
		num=round(num);	
	}
	cout<<"First Digit : ";
	cout<<num<<endl;

	cout<<"Last Digit : ";
	cout<<last<<endl;
	
	cout<<"sum of first and last digit is: "<<num+last<<endl;
 
	return 0;
}
