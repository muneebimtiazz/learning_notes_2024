#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
Node *head=nullptr;

void sortedInsert(int d) {
    Node *NN, *p, *prev;
    NN = new Node;
    NN->data = d;
    NN->next = nullptr;

    if (head == nullptr || head->data > d) {
        NN->next = head;
        head = NN;
        return;
    }

    prev = nullptr;
    p = head;
    while (p != nullptr && p->data < d) {
        prev = p;
        p = p->next;
    }

    prev->next = NN;
    NN->next = p;
}
void display() {
    Node *p = head;
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    cout << "List is: ";
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}


int main() {
    int n,data;
    cout<<"enter no of nodes yo want to create:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter data:";
        cin>>data;
        sortedInsert(data);
    }

    cout<<"display sorted linkedlist:";
    display();
    return 0;
}
