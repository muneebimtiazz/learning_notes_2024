#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL; 

void create(int d) {
    Node* NN = new Node;
    NN->data = d;
    NN->next = NULL;
    if (head == NULL)
        head = NN;
    else {
        Node* p = head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = NN;
    }
}

void insertBefore(int d, int nodeNumber) {
    Node *NN, *q, *prev;
    q = head;
    prev = nullptr;

    for (int i = 1; i < nodeNumber; i++) {
        prev = q;
        q = q->next;

        if (q == nullptr) {
            cout << "There are less than " << nodeNumber << " elements." << endl;
            return;
        }
    }
    NN = new Node;
    NN->data = d;
    if (prev == nullptr) {
        NN->next = head;
        head = NN;
    } else {
        NN->next = prev->next;
        prev->next = NN;
    }
}

void insertAfter(int d, int nodeNumber) {
    Node *NN, *q;
    q = head;
    for (int i = 1; i < nodeNumber ; i++) {
        q = q->next;
        if (q == NULL) {
            cout << "There are less than " << nodeNumber << " elements." << endl;
            return;
        }
    }
    NN = new Node;
    NN->next = q->next;
    NN->data = d;
    q->next = NN;
}
//deletion (Data)
void del(int d) {
    Node* NN, *q;
    if (head->data == d) {
        NN = head;
        head = head->next;
        delete NN;
        return;
    }
    q = head;
    while (q->next->next != NULL) {
        if (q->next->data == d) {
            NN = q->next;
            q->next = NN->next;
            delete NN;
            return;
        }
        q = q->next;
    }
    if (q->next->data == d) {
        NN = q->next;
        delete NN;
        q->next = NULL;
        return;
    }
    cout << "Element " << d << " not found." << endl;
}

void traverse() {
    Node* p = head;
    if (head == NULL) {
        cout << "list is empty";
    }
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void search(int d) {
    Node* p = head;
    int N = 1;
    while (p != NULL) {
        if (p->data == d)
            cout << "Data Found node " << N << endl;
        else
            N++;
        p = p->next;
    }
}

int main() {
    int choice, data, nodeNumber;
    while (true) {
        cout<< "1. Create List\n"
            << "2. Add at before,or start\n"
            << "3. Add after,or end\n"
            << "4. Delete\n"
            << "5. Display\n"
            << "6. Search\n"
            << "0. Quit\n"
            << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                int node;
                cout << "Enter no of nodes:";
                cin >> node;
                for (int i = 1; i <= node; i++) {
                    cout << "Enter data at node "<<i<<":";
                    cin >> data;
                    create(data);
                }
                break;

            case 2:
                cout << "Enter data to insert: ";
                cin >> data;
                cout << "Enter the nodeNumber before which this element is about to insert: ";
                cin >> nodeNumber;
                insertBefore(data, nodeNumber);
                break;

            case 3:
                cout << "Enter data to insert: ";
                cin >> data;
                cout << "Enter the nodeNumber after which this element is about to insert: ";
                cin >> nodeNumber;
                insertBefore(data, nodeNumber);
                break;

            case 4:
                cout << "Enter data to delete: ";
                cin >> data;
                del(data);
                break;

            case 5:
                cout << "Linked List: ";
                traverse();
                break;
            
            case 6:
                cout << "Enter data to search: ";
                cin >> data;
                search(data);
                break;

            case 0:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
                break;
        }
    }

    return 0;
}
