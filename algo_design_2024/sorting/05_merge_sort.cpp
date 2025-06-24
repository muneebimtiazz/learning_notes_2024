#include <iostream>
using namespace std;

void Merge(int arr[], int temp[], int left, int mid, int right);

void Mergesort(int arr[], int temp[], int left, int right) {
    int mid;
    if (right > left) {
        mid = (right + left) / 2;
        Mergesort(arr, temp, left, mid);
        Mergesort(arr, temp, mid + 1, right);
        Merge(arr, temp, left, mid + 1, right);
    }
}

void Merge(int arr[], int temp[], int left, int mid, int right) {
    int i, left_end, size, temp_pos;

    left_end = mid - 1;
    temp_pos = left;
    size = right - left + 1;

    while (left <= left_end && mid <= right) {
        if (arr[left] <= arr[mid]) {
            temp[temp_pos] = arr[left];
            temp_pos = temp_pos + 1;
            left = left + 1;
        } else {
            temp[temp_pos] = arr[mid];
            temp_pos = temp_pos + 1;
            mid = mid + 1;
        }
    }

    while (left <= left_end) {
        temp[temp_pos] = arr[left];
        temp_pos = temp_pos + 1;
        left = left + 1;
    }

    while (mid <= right) {
        temp[temp_pos] = arr[mid];
        temp_pos = temp_pos + 1;
        mid = mid + 1;
    }

    for (i = 0; i < size; i++) {
        arr[right] = temp[right];
        right = right - 1;
    }
}

int main() {
    int arr[] = {12, 4, 5, 6, 7, 3, 1, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[n];

    Mergesort(arr, temp, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
