#include <iostream>

// Iterative Binary Search Algorithm
int BinarySearchIterative(int A[], int n, int data) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // To avoid overflow

        if (A[mid] == data)
            return mid;
        else if (A[mid] < data)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

// Recursive Binary Search Algorithm
int BinarySearchRecursive(int A[], int low, int high, int data) {
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2; // To avoid overflow

    if (A[mid] == data)
        return mid;
    else if (A[mid] < data)
        return BinarySearchRecursive(A, mid + 1, high, data);
    else
        return BinarySearchRecursive(A, low, mid - 1, data);
}

int main() {
    const int size = 5;  // You can adjust the size of the array as needed
    int array[size] = {10, 20, 30, 40, 50};  // Example sorted array

    int searchData;
    std::cout << "Enter the element to search: ";
    std::cin >> searchData;

    int iterativeResult = BinarySearchIterative(array, size, searchData);
    int recursiveResult = BinarySearchRecursive(array, 0, size - 1, searchData);

    if (iterativeResult != -1) {
        std::cout << "Iterative Binary Search: Element found at index " << iterativeResult << std::endl;
    } else {
        std::cout << "Iterative Binary Search: Element not found in the array." << std::endl;
    }

    if (recursiveResult != -1) {
        std::cout << "Recursive Binary Search: Element found at index " << recursiveResult << std::endl;
    } else {
        std::cout << "Recursive Binary Search: Element not found in the array." << std::endl;
    }

    return 0;
}
