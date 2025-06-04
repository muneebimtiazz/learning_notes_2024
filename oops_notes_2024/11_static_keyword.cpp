#include <iostream>
using namespace std;
void countFunction() {
    // static variable retains its value between function calls
    static int count = 0;
    count++;
    cout << "Count: " << count << endl;
}

int main() {
    countFunction();  // Output: Count: 1
    countFunction();  // Output: Count: 2
    return 0;
}
