#include <iostream>
using namespace std;

// Node structure to represent each element in the linked list
struct Node {
    int data;
    Node* next;
};

// Stack structure using a singly linked list
struct LinkedListStack {
    Node* top; // Pointer to the top of the stack
};

// Function to create an empty stack
LinkedListStack createStack() {
    LinkedListStack stack;
    stack.top = nullptr;
    return stack;
}

// Function to check if the stack is empty
bool isEmpty(const LinkedListStack& stack) {
    return stack.top == nullptr;
}

// Function to push an element onto the stack
void push(LinkedListStack& stack, int value) {
    Node* newNode = new Node{value, stack.top};
    stack.top = newNode;
    cout << "Pushed: " << value << endl;
}

// Function to pop an element from the stack
int pop(LinkedListStack& stack) {
    if (isEmpty(stack)) {
        cerr << "Stack Underflow" << endl;
        return INT_MIN; // Using INT_MIN as an error indicator
    }

    Node* temp = stack.top;
    int poppedValue = temp->data;
    stack.top = stack.top->next;
    delete temp;
    return poppedValue;
}

// Function to get the top element of the stack without removing it
int peek(const LinkedListStack& stack) {
    if (isEmpty(stack)) {
        cerr << "Stack is Empty" << endl;
        return INT_MIN; // Using INT_MIN as an error indicator
    }
    return stack.top->data;
}

// Function to delete the stack and free memory
void deleteStack(LinkedListStack& stack) {
    while (!isEmpty(stack)) {
        pop(stack);
    }
}

int main() {
    LinkedListStack stack = createStack();

    push(stack, 1);
    push(stack, 2);
    push(stack, 3);

    cout << "Top element: " << peek(stack) << endl;

    cout << "Popped element: " << pop(stack) << endl;
    cout << "Popped element: " << pop(stack) << endl;

    cout << "Top element: " << peek(stack) << endl;

    deleteStack(stack);

    return 0;
}
