// time complexity 0(n^2)
#include<iostream>
using namespace std;

void BubbleSort(int A[], int n) {
    for (int pass = n - 1; pass >= 0; pass--) {
        for (int i = 0; i <= pass - 1; i++) {
            if (A[i] > A[i + 1]) {
                // swap elements
                int temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {11, 55, 23, 74, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, n);

    // Display the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
