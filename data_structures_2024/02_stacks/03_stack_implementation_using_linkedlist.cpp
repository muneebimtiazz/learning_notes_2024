#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

struct Stack {
    Node* top;
};

Stack* CreateStack() {
    return NULL;
}

void Push(Stack** top, int data) {
    if (*top == NULL) {
        // Handle the case where the stack pointer is null (optional)
        *top = new Stack{NULL};
    }

    Node* temp = new Node{data, (*top)->top};
    (*top)->top = temp;
}

bool IsEmptyStack(Stack* top) {
    return top == NULL || top->top == NULL;
}

int Pop(Stack** top) {
    if (IsEmptyStack(*top))
        return -1;  // Return a special value to indicate failure

    Node* temp = (*top)->top;
    int data = temp->data;
    (*top)->top = temp->next;
    delete temp;
    return data;
}

int Top(Stack* top) {
    if (IsEmptyStack(top))
        return -1;  // Return a special value to indicate failure

    return top->top->data;
}

void DeleteStack(Stack** top) {
    Node* temp;
    while ((*top)->top != NULL) {
        temp = (*top)->top;
        (*top)->top = temp->next;
        delete temp;
    }
    delete *top;
    *top = NULL;
}

int main() {
    Stack* myStack = CreateStack();

    Push(&myStack, 10);
    Push(&myStack, 20);
    Push(&myStack, 30);

    cout << "Top element: " << Top(myStack) << endl;

    cout << "Popped element: " << Pop(&myStack) << endl;
    cout << "Popped element: " << Pop(&myStack) << endl;

    cout << "Top element after popping: " << Top(myStack) << endl;

    DeleteStack(&myStack);

    return 0;
}
