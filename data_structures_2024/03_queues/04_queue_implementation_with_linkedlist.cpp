#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct Queue {
    Node *front, *rear;
};

Queue* CreateQueue() {
    Queue* Q = new Queue;
    if (!Q)
        return NULL;

    Q->front = Q->rear = NULL;
    return Q;
}

int IsEmptyQueue(Queue* Q) {
    return (Q->front == NULL);
}

void EnQueue(Queue* Q, int data) {
    Node* NN = new Node;
    if (!NN)
        return;

    NN->data = data;
    NN->next = NULL;

    if (Q->rear)
        Q->rear->next = NN;

    Q->rear = NN;

    if (Q->front == NULL)
        Q->front = Q->rear;
}

int DeQueue(Queue* Q) {
    if (IsEmptyQueue(Q)) {
        cout << "Queue is empty" << endl;
        return 0;
    } else {
        Node* temp = Q->front;
        int data = temp->data;

        Q->front = Q->front->next;
        delete temp;

        if (Q->front == NULL)
            Q->rear = NULL;

        return data;
    }
}

void DeleteQueue(Queue* Q) {
    Node* temp;
    while (Q->front) {
        temp = Q->front;
        Q->front = Q->front->next;
        delete temp;
    }

    delete Q;
}

int main() {
    Queue* myQueue = CreateQueue();

    EnQueue(myQueue, 10);
    EnQueue(myQueue, 20);
    EnQueue(myQueue, 30);

    cout << "Dequeued item: " << DeQueue(myQueue) << endl;

    DeleteQueue(myQueue);

    return 0;
}
