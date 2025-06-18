#include <iostream>
using namespace std;

#define MAXSIZE 10

struct Deque {
    int capacity;
    int front, rear;
    int* array;
};

Deque* CreateDeque() {
    Deque* D = new Deque;
    if (!D)
        return nullptr;

    D->capacity = MAXSIZE;
    D->front = D->rear = -1;
    D->array = new int[D->capacity];

    return D;
}

int IsEmptyDeque(Deque* D) {
    return (D->front == -1);
}

int IsFullDeque(Deque* D) {
    return (D->rear == D->capacity - 1);
}

int DequeSize(Deque* D) {
    if (IsEmptyDeque(D))
        return 0;
    return (D->rear - D->front + 1);
}

void EnqueueFront(Deque* D, int data) {
    if ((D->front - 1 + D->capacity) % D->capacity == D->rear) {
        cout << "Deque Overflow" << endl;
    } else {
        D->front = (D->front - 1 + D->capacity) % D->capacity;
        D->array[D->front] = data;
        if (D->rear == -1)
            D->rear = D->front;
    }
}

void EnqueueRear(Deque* D, int data) {
    if (IsFullDeque(D)) {
        cout << "Deque Overflow" << endl;
    } else {
        D->rear = (D->rear + 1) % D->capacity;
        D->array[D->rear] = data;
        if (D->front == -1)
            D->front = D->rear;
    }
}

int DequeueFront(Deque* D) {
    int data = 0;
    if (IsEmptyDeque(D)) {
        cout << "Deque is Empty" << endl;
    } else {
        data = D->array[D->front];
        if (D->front == D->rear)
            D->front = D->rear = -1;
        else
            D->front = (D->front + 1) % D->capacity;
    }
    return data;
}

int DequeueRear(Deque* D) {
    int data = 0;
    if (IsEmptyDeque(D)) {
        cout << "Deque is Empty" << endl;
    } else {
        data = D->array[D->rear];
        if (D->front == D->rear)
            D->front = D->rear = -1;
        else
            D->rear = (D->rear - 1 + D->capacity) % D->capacity;
    }
    return data;
}

int main() {
    Deque* myDeque = CreateDeque();

    // Enqueue some elements from both ends
    EnqueueFront(myDeque, 1);
    EnqueueRear(myDeque, 2);
    EnqueueFront(myDeque, 3);
    EnqueueRear(myDeque, 4);

    // Print the size of the deque
    cout << "Deque size: " << DequeSize(myDeque) << endl;

    // Dequeue from both ends and print elements
    cout << "Dequeued element from front: " << DequeueFront(myDeque) << endl;
    cout << "Dequeued element from rear: " << DequeueRear(myDeque) << endl;

    // Print the size of the deque after dequeuing
    cout << "Deque size: " << DequeSize(myDeque) << endl;

    // Enqueue more elements
    EnqueueFront(myDeque, 5);
    EnqueueRear(myDeque, 6);

    // Print the size of the deque after enqueuing
    cout << "Deque size: " << DequeSize(myDeque) << endl;

    // Dequeue from both ends and print remaining elements
    cout << "Dequeued element from front: " << DequeueFront(myDeque) << endl;
    cout << "Dequeued element from rear: " << DequeueRear(myDeque) << endl;

    // Check if the deque is empty
    if (IsEmptyDeque(myDeque))
        cout << "Deque is empty." << endl;
    else
        cout << "Deque is not empty." << endl;

    // Delete the deque to free the allocated memory
    delete[] myDeque->array;
    delete myDeque;

    return 0;
}
