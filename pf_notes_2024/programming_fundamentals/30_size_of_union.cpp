#include <iostream>
using namespace std;

union MyUnion {
    int intValue;
    double doubleValue;
    char charValue;
};

int main() {
    cout << "Size of MyUnion: " << sizeof(MyUnion) << " bytes" << endl;

    return 0;
}
/*
the size of MyUnion will be determined by the size of the largest member, which is likely the float on most systems. The sizeof operator returns the size of the union in bytes. Keep in mind that the size might be larger if padding is added to meet alignment requirements.
*/