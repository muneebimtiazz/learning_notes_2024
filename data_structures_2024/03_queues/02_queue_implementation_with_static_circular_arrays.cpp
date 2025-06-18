// circular queue is a data structure that is implemented using a circular array. The circular array allows the front and rear pointers to wrap around from the end of the array to the beginning, creating a circular structure. 
#include <iostream>
using namespace std;

#define MAXSIZE 10

struct Queue {
    int capacity;
    int front, rear;
    int* array;
};

Queue* CreateQueue() {
    Queue* Q = new Queue;
    if (!Q)
        return nullptr;

    Q->capacity = MAXSIZE;
    Q->front = Q->rear = -1;
    Q->array = new int[Q->capacity];  

    return Q;
}

int IsEmptyQueue(Queue* Q) {
    return (Q->front == -1);
}

int IsFullQueue(Queue* Q) {
    return ((Q->rear + 1) % Q->capacity == Q->front);
}

// Function to get the size of the queue
int QueueSize(Queue* Q) {
    if (IsEmptyQueue(Q))
        return 0;
    return (Q->capacity - Q->front + Q->rear + 1) % Q->capacity;
}

// Function to enqueue (add) an element to the queue
void EnQueue(Queue* Q, int data) {
    if (IsFullQueue(Q))
        cout << "Queue Overflow" << endl;
    else {
        Q->rear = (Q->rear + 1) % Q->capacity;
        Q->array[Q->rear] = data;
        if (Q->front == -1)
            Q->front = Q->rear;
    }
}

int DeQueue(Queue* Q) {
    int data = 0;  // or any element that doesn't exist in the queue
    if (IsEmptyQueue(Q)) {
        cout << "Queue is Empty" << endl;
    } else {
        data = Q->array[Q->front];
        if (Q->front == Q->rear)
            Q->front = Q->rear = -1;
        else
            Q->front = (Q->front + 1) % Q->capacity;
    }
    return data;
}


int main() {
    Queue* myQueue = CreateQueue();

    // Enqueue some elements
    EnQueue(myQueue, 1);
    EnQueue(myQueue, 2);
    EnQueue(myQueue, 3);

    // Print the size of the queue
    cout << "Queue size: " << QueueSize(myQueue) << endl;

    // Dequeue and print elements
    cout << "Dequeued element: " << DeQueue(myQueue) << endl;
    cout << "Dequeued element: " << DeQueue(myQueue) << endl;

    // Print the size of the queue after dequeuing
    cout << "Queue size: " << QueueSize(myQueue) << endl;

    // Enqueue more elements
    EnQueue(myQueue, 4);
    EnQueue(myQueue, 5);

    // Print the size of the queue after enqueuing
    cout << "Queue size: " << QueueSize(myQueue) << endl;

    // Dequeue and print remaining elements
    cout << "Dequeued element: " << DeQueue(myQueue) << endl;
    cout << "Dequeued element: " << DeQueue(myQueue) << endl;

    // Check if the queue is empty
    if (IsEmptyQueue(myQueue))
        cout << "Queue is empty." << endl;
    else
        cout << "Queue is not empty." << endl;

    // Delete the queue to free the allocated memory
    delete[] myQueue->array;
    delete myQueue;

    return 0;
}
// The circular implementation of a queue is especially useful when you want to reuse the space left behind by dequeued elements without having to resize the array or shift elements, making it a more efficient data structure for certain scenarios
