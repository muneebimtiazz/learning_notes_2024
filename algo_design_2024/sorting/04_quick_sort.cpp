#include <iostream>
using namespace std;

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int Partition(int arr[], int low, int high) {
    int left, right, pivot_item = arr[low];
    left = low;
    right = high;
    while (left < right) {
        /* Move left while item < pivot */
        while (arr[left] < pivot_item)
            left++;
        /* Move right while item > pivot */
        while (arr[right] > pivot_item)
            right--;
        if (left < right)
            swap(arr, left, right);
    }
    /* Right is the final position for the pivot */
    arr[low] = arr[right];
    arr[right] = pivot_item;
    return right;
}

void Quicksort(int arr[], int low, int high) {
    int pivot;
    if (high > low) {
        pivot = Partition(arr, low, high);
        Quicksort(arr, low, pivot - 1);
        Quicksort(arr, pivot + 1, high);
    }
}

int main() {
    int arr[] = {12, 4, 5, 6, 7, 3, 1, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    Quicksort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
