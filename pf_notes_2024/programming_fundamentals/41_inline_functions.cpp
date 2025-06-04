// We can declare a function as inline in C++. Compile-time copying of the function to the place of the function call may make the program execution faster..
// In other words, one may say that such a function is expanded in-line, hence named as an inline function
// Inline functions are most effective for short, simple functions. For larger functions, inlining may not be practical due to the code bloat and decreased maintainability. 
#include <iostream>
using namespace std;
inline int max(int x,int y){
   return (x>y)?x:y;
}
int main() {
   cout<<"which one is max (5,10)?: "<<max(5,10)<<endl;
   cout<<"which one is max (0,-1)?: "<<max(0,-1)<<endl;
   cout<<"which one is max (1,5)?: "<< max(1,5)<<endl;
   
   return 0;
}

// Functions that are declared and defined inside a class need not be defined as inline functions explicitly since they are already treated as inline functions by default.
