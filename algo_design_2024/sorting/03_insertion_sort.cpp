#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i;
        while (j > 0 && arr[j - 1] > temp) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = temp;
    }
}

int main() {
    int arr[] = {11, 55, 23, 74, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    InsertionSort(arr, n);

    // Display the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
