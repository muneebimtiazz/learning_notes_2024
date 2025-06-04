// C++ Lambda expression allows us to define anonymous function

#include <iostream>
using namespace std;

int main(){

  int num=0;

  cout<<"Initially:"<<num<<endl;
  
  // [&num] captures num by reference
  auto increment_by_one=[&num](int a,int b){
    cout<<"sum:"<<a+b<<endl;
    cout<<"increment"<<num++<<endl;
  };

  // invoke lambda function
  increment_by_one(3,5);
  cout<<"Now:"<<num<<endl;

  return 0;
}