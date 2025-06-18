#include <iostream>
using namespace std;
struct Heap {
    int* array;
    int count;
    int capacity;
    int heap_type;
};

Heap* CreateHeap(int capacity, int heap_type) {
    Heap* h = new Heap;
    if (!h) {
        cout << "Memory Error" << endl;
        return NULL;
    }

    h->heap_type = heap_type;
    h->count = 0;
    h->capacity = capacity;
    h->array = new int[h->capacity];
    if (!h->array) {
        cout << "Memory Error" << endl;
        delete h;
        return NULL;
    }

    return h;
}

int Parent(Heap* h, int i) {
    if (i <= 0 || i >= h->count)
        return -1;
    return (i - 1) / 2;
}

int LeftChild(Heap* h, int i) {
    int left = 2 * i + 1;
    if (left >= h->count)
        return -1;
    return left;
}

int RightChild(Heap* h, int i) {
    int right = 2 * i + 2;
    if (right >= h->count)
        return -1;
    return right;
}

int GetMaximum(Heap* h) {
    if (h->count == 0)
        return -1;
    return h->array[0];
}

void PercolateDown(Heap* h, int i) {
    int l, r, max, temp;
    l = LeftChild(h, i);
    r = RightChild(h, i);

    if (l != -1 && h->array[l] > h->array[i])
        max = l;
    else
        max = i;

    if (r != -1 && h->array[r] > h->array[max])
        max = r;

    if (max != i) {
        // Swap h->array[i] and h->array[max];
        temp = h->array[i];
        h->array[i] = h->array[max];
        h->array[max] = temp;

        PercolateDown(h, max);
    }
}

int DeleteMax(Heap* h) {
    int data;
    if (h->count == 0)
        return -1;

    data = h->array[0];
    h->array[0] = h->array[h->count - 1];
    h->count--; // reducing the heap size
    PercolateDown(h, 0);

    return data;
}

void DestroyHeap(Heap* h) {
    if (h == NULL)
        return;
    delete[] h->array;
    delete h;
}

int main() {
    // Example usage of the heap
    Heap* myHeap = CreateHeap(10, 1); // 1 for Max Heap, 0 for Min Heap

    // Insert elements into the heap
    for (int i = 10; i > 0; --i) {
        myHeap->array[myHeap->count++] = i;
    }

    // Delete and print elements in descending order
    while (myHeap->count > 0) {
        int max = DeleteMax(myHeap);
        cout << max << " ";
    }

    DestroyHeap(myHeap);

    return 0;
}
