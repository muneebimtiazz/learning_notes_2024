// This	modified version improves the best case	of bubble sort	to	O(n).

#include<iostream>
using namespace std;

void Bubble(int arr[], int n) {
    int i, j, temp;
    bool isFlagSet = true;

    for (i = n - 1; i >= 0 && isFlagSet; i--) {
        isFlagSet = false;

        for (j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isFlagSet = true;
            }
        }
    }
}



int main() {
    int arr[] = {11, 55, 23, 74, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    Bubble(arr, n); 

    // Display the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
