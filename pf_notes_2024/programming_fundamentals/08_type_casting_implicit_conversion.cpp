// In C++, type casting is the process of converting a value from one data type to another. 
// Implicit Type Casting (Automatic Type Conversion/type coercion)
// Explicit Type Casting (Manual Type Conversion)

#include<iostream>
#include <typeinfo>
using namespace std;
int main(){
/*No Data Loss in Widening Conversions: Widening conversions, where you are converting from a smaller data type to a larger data type, should not result in data loss. For example, converting from an int to a double should not lose any information, as the larger data type can represent the entire range of values of the smaller data type.*/

    int num=5; //small container with value 5
    double dnum; //large container
    dnum=num;  //Pour the value of 'num' into 'dnum'
    cout<<"num:"<<typeid(num).name()<<","<<num<<endl;
    cout<<"dnum:"<<typeid(dnum).name()<<","<<dnum<<endl;
    // he int value is automatically converted to double by the compiler before it is assigned to the num_double variable. This is an example of implicit type conversion.

/*Data Loss in Narrowing Conversions: Data loss is more likely to occur in narrowing conversions, where you are converting from a larger data type to a smaller data type. In these cases, if the original value cannot be precisely represented in the smaller data type, you may lose information. For example, converting from a double with a fractional part to an int will truncate the decimal part, resulting in data loss.*/

    int num1; //small container 
    double dnum1=5.0; //large container with value 5.0
    num1=dnum1;  //Pour the value of 'dnum' into 'num' (spilling)
    cout<<"num:"<<typeid(num1).name()<<","<<num1<<endl;
    cout<<"dnum:"<<typeid(dnum1).name()<<","<<dnum1<<endl;

//example 2
    int a=10;
    char b='A';
    cout<<a+b; //char automatically converted into a value of a larger data type(int)
    
    return 0;
}