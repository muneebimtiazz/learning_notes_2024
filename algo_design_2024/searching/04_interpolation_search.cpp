#include <iostream>
using namespace std;

int InterpolationSearch(int arr[], int n, int data) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + ((data - arr[low]) * (high - low) / (arr[high] - arr[low]));

        if (data == arr[mid])
            return mid;  // Element found
        else if (data < arr[mid])
            high = mid - 1;  // Adjust the search space to the left half
        else
            low = mid + 1;   // Adjust the search space to the right half
    }

    return -1;
}

int main() {
    const int size = 5;
    int array[size] = {10, 20, 30, 40, 50};

    int searchData;
    cout << "Enter the element to search: ";
    cin >> searchData;

    int result = InterpolationSearch(array, size, searchData);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
