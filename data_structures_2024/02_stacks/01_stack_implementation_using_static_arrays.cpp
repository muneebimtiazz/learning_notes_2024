#include <iostream>
using namespace std;

#define MAXSIZE 10

struct Stack {
    int top;
    int capacity;
    int* array;
};

Stack* CreateStack() {
     Stack* S = new Stack;
    if (!S)
        return nullptr;

    S->capacity = MAXSIZE;
    S->top = -1;
    S->array = new int[S->capacity];
    if (!S->array)
        return nullptr;

    return S;
}

int IsEmptyStack( Stack* S) {
    return (S->top == -1);
}

int IsFullStack( Stack* S) {
    return (S->top == S->capacity - 1);
}

void Push( Stack* S, int data) {
    if (IsFullStack(S))
        cout << "Stack Overflow" << endl;
    else
        S->array[++S->top] = data;
}

int Pop( Stack* S) {
    if (IsEmptyStack(S)) {
        cout << "Stack is Empty" << endl;
        return INT_MIN;
    }
    else
        return (S->array[S->top--]);
}

void DeleteStack( Stack* S) {
    if (S) {
        if (S->array)
            delete[] S->array;
        delete S;
    }
}

int main() {
    Stack* stack = CreateStack();

    Push(stack, 1);
    Push(stack, 2);
    Push(stack, 3);

    cout << "Popped element: " << Pop(stack) << endl;

    DeleteStack(stack);

    return 0;
}
