#include <iostream>
using namespace std;

int UnOrderedLinearSearch(int arr[], int n, int data) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == data)
            return i;
    }
    return -1;
}

int main() {
    int size = 5; 
    int array[size] = {10, 20, 30, 40, 50}; 

    int searchData;
    cout << "Enter the element to search: ";
    cin >> searchData;

    int result = UnOrderedLinearSearch(array, size, searchData);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
