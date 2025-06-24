#include <iostream>
using namespace std;

int OrderedLinearSearch(int arr[], int n, int data) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == data) {
            return i;  // Element found, return the index
        } else if (arr[i] > data) {
            return -1;  // Element not found, as the array is ordered and current element is greater than the search data
        }
    }
    return -1;
}

int main() {
    int size = 5; 
    int array[size] = {10, 20, 30, 40, 50}; 

    int searchData;
    cout << "Enter the element to search: ";
    cin >> searchData;

    int result = OrderedLinearSearch(array, size, searchData);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
