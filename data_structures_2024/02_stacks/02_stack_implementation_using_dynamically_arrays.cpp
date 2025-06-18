#include <iostream>
using namespace std;

struct Stack {
    int top;
    int capacity;
    int* array;
};

Stack* CreateStack() {
    Stack *S;
    S = new Stack;
    if (!S)
        return nullptr;

    S->capacity = 1;
    S->top = -1;
    S->array = new int[S->capacity];
    if (!S->array)
        return nullptr;

    return S;
}

int IsFullStack(Stack* S) {
    return (S->top == S->capacity - 1);
}

void DoubleStack(Stack* S) {
    S->capacity *= 2;
    int* newArray = new int[S->capacity];

    for (int i = 0; i <= S->top; ++i) {
        newArray[i] = S->array[i];
    }

    delete[] S->array;
    S->array = newArray;
}

void Push(Stack* S, int x) {
    if (IsFullStack(S))
        DoubleStack(S);

    S->array[++S->top] = x;
}

int IsEmptyStack(Stack* S) {
    return (S->top == -1);
}

int Top(Stack* S) {
    if (IsEmptyStack(S))
        return INT_MIN;

    return S->array[S->top];
}

int Pop(Stack* S) {
    if (IsEmptyStack(S))
        return INT_MIN;

    return S->array[S->top--];
}

void DeleteStack(Stack* S) {
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

    cout << "Top element: " << Top(stack) << endl;

    Pop(stack);
    Pop(stack);

    DeleteStack(stack);

    return 0;
}
