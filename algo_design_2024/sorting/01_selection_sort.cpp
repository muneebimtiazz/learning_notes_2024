#include<iostream>
using namespace std;

void Selection(int arr[], int n) {
    int i, j, min, temp;

    for (i = 0; i < n - 1; i++) {
        min = i; 

        for (j = i + 1; j < n; j++) { 
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        // swap elements
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {11, 55, 23, 74, 13};
    int n = sizeof(arr) / sizeof(arr[0]); // find out how many elements are there in the array
    Selection(arr, n); 

    // Display the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
