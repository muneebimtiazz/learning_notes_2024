#include <iostream>
using namespace std;
int main(){
	float num1,num2;
	char oper;
	cout<<"enter the first number"<<endl;
	cin>>num1;
	cout<<"enter the second number"<<endl;
	cin>>num2;
	cout<<"select an operator + , - , * , /"<<endl;
	cin>>oper;
	switch(oper){
		case '+':
			cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
			break;
		case '-':
			cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
			break;
		case '*':
			cout<<num1<<"*"<<num2<<"="<<num1-num2<<endl;
			break;
		case '/':
			cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
			break;
	}
	
	return 0;
}
