// implementation of deque can be done with circular arrays or doubly linked list.
#include <iostream>
using namespace std;

#define MAXSIZE 10

struct CircularDeque {
    int* array;
    int front, rear, size, capacity;

    CircularDeque(int cap) {
        array = new int[cap];
        capacity = cap;
        size = 0;
        front = rear = -1;
    }

    ~CircularDeque() {
        delete[] array;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

    void insertFront(int value) {
        if (isFull()) {
            cout << "Deque is full. Cannot insert at the front." << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            front = (front - 1 + capacity) % capacity;
        }

        array[front] = value;
        size++;
    }

    void insertRear(int value) {
        if (isFull()) {
            cout << "Deque is full. Cannot insert at the rear." << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % capacity;
        }

        array[rear] = value;
        size++;
    }

    void deleteFront() {
        if (isEmpty()) {
            cout << "Deque is empty. Cannot delete from the front." << endl;
            return;
        }

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % capacity;
        }

        size--;
    }

    void deleteRear() {
        if (isEmpty()) {
            cout << "Deque is empty. Cannot delete from the rear." << endl;
            return;
        }

        if (front == rear) {
            front = rear = -1;
        } else {
            rear = (rear - 1 + capacity) % capacity;
        }

        size--;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Deque is empty." << endl;
            return -1;  // or any value that indicates an empty deque
        }

        return array[front];
    }

    int getRear() {
        if (isEmpty()) {
            cout << "Deque is empty." << endl;
            return -1;  // or any value that indicates an empty deque
        }

        return array[rear];
    }

    int getSize() {
        return size;
    }
};

int main() {
    CircularDeque myDeque(MAXSIZE);

    myDeque.insertRear(1);
    myDeque.insertRear(2);
    myDeque.insertFront(3);
    myDeque.insertFront(4);

    cout << "Front: " << myDeque.getFront() << ", Rear: " << myDeque.getRear() << ", Size: " << myDeque.getSize() << endl;

    myDeque.deleteFront();
    myDeque.deleteRear();

    cout << "Front: " << myDeque.getFront() << ", Rear: " << myDeque.getRear() << ", Size: " << myDeque.getSize() << endl;

    return 0;
}
