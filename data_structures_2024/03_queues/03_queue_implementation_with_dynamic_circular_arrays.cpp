// circular queue
#include <iostream>
using namespace std;

struct Queue {
    int front, rear;
    int capacity;
    int *array;
};

Queue *CreateQueue() {
    Queue *Q = new Queue;
    if (!Q)
        return nullptr;

    Q->capacity = 1;
    Q->front = Q->rear = -1;

    Q->array = new int[Q->capacity];
    if (!Q->array) {
        delete Q;
        return nullptr;
    }

    return Q;
}

bool IsEmptyQueue(Queue *Q) {
    return (Q->front == -1);
}

bool IsFullQueue(Queue *Q) {
    return ((Q->rear + 1) % Q->capacity == Q->front);
}

int QueueSize(Queue *Q) {
    return (Q->capacity - Q->front + Q->rear + 1) % Q->capacity;
}

void ResizeQueue(Queue *Q) {
    int size = Q->capacity;
    Q->capacity = Q->capacity * 2;

    int *newArray = new int[Q->capacity];
    if (!newArray) {
        cout << "Memory Error\n";
        return;
    }

    if (Q->front > Q->rear) {
        for (int i = 0; i < Q->front; i++) {
            newArray[i + size] = Q->array[i];
        }
        Q->rear = Q->rear + size;
    }

    delete[] Q->array;
    Q->array = newArray;
}

void EnQueue(Queue *Q, int data) {
    if (IsFullQueue(Q))
        ResizeQueue(Q);

    if (IsEmptyQueue(Q))
        Q->front = 0;

    Q->rear = (Q->rear + 1) % Q->capacity;
    Q->array[Q->rear] = data;
}

int DeQueue(Queue *Q) {
    int data = 0;
    if (IsEmptyQueue(Q)) {
        cout << "Queue is Empty\n";
    } else {
        data = Q->array[Q->front];
        if (Q->front == Q->rear)
            Q->front = Q->rear = -1;
        else
            Q->front = (Q->front + 1) % Q->capacity;
    }
    return data;
}

void DeleteQueue(Queue *Q) {
    if (Q) {
        if (Q->array)
            delete[] Q->array;
        delete Q;
    }
}

int main() {
    Queue *myQueue = CreateQueue();

    EnQueue(myQueue, 1);
    EnQueue(myQueue, 2);
    EnQueue(myQueue, 3);

    cout << "Queue size: " << QueueSize(myQueue) << endl;

    cout << "Dequeued element: " << DeQueue(myQueue) << endl;
    cout << "Dequeued element: " << DeQueue(myQueue) << endl;

    cout << "Queue size: " << QueueSize(myQueue) << endl;

    EnQueue(myQueue, 4);
    EnQueue(myQueue, 5);

    cout << "Queue size: " << QueueSize(myQueue) << endl;

    cout << "Dequeued element: " << DeQueue(myQueue) << endl;
    cout << "Dequeued element: " << DeQueue(myQueue) << endl;

    if (IsEmptyQueue(myQueue))
        cout << "Queue is empty." << endl;
    else
        cout << "Queue is not empty." << endl;

    DeleteQueue(myQueue);

    return 0;
}
