#include <iostream>
using namespace std;
union MyUnion {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    MyUnion myData;

    myData.intValue = 42;
    cout << "Int value: " << myData.intValue << endl;
    
    myData.floatValue = 3.14f;
    cout << "Float value: " << myData.floatValue << endl;
    
    myData.charValue = 'A';
    cout << "Char value: " << myData.charValue << endl;
    
    return 0;
}
// Each instance of the union operates independently and does not overwrite or affect the values in other instances.