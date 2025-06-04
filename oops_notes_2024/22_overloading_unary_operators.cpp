#include <iostream>
using namespace std;
class  counter{
	unsigned int count;
	public:
		counter(): count(0){}
		counter(int c): count(c){}

		unsigned int show(){
			return count;
		}

    // prefix notation
		counter operator ++(){
			return counter(++count);
		}
    // postfix notation
		counter operator ++(int){
			return counter(count++);
		}
		
};
int main(){
	counter c1,c2;

	cout<<"default value of c1 set by constructor:"<<c1.show()<<endl;
	cout<<"default value of c2 set by constructor:"<<c2.show()<<endl;
	unsigned int v;
	cout<<"enter value in c3:";
	cin>>v;
	counter c3(v);
	cout<<"userdefined value of c3 set by constructor:"<<c3.show()<<endl;
	
	++c1;
	c2=c1++;
	c3++;
    
	cout<<c1.show()<<endl;
	cout<<c2.show()<<endl;
	cout<<c3.show()<<endl;
	cout<<c2.show()<<endl;
	return 0; 
}


