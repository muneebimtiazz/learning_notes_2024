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

void insert(int d, int position) {
    Node* NN = new Node;
    NN->data = d;
    NN->next = NULL;

    // beg
    if (position == 1) {
        NN->next = head;
        head = NN;
    } else if (position >= 2) {
    // middle
        Node* p = head;
        int k = 1;
        while ((p != NULL) && (k < position - 1)) {
            k++;
            p = p->next;
        }
        if (p == NULL) {
            cout << "Invalid position. Insertion failed." << endl;
            return;
        }
        NN->next = p->next;
        p->next = NN;
    } else {
    // end
        if (head == NULL)
            head = NN;
        else {
            NN->next = NULL;
            Node* p = head;
            while (p->next != NULL) {
                p = p->next;
            }
            p->next = NN;
        }
    }
}

//deletion (Node Number)
void del(int position) {
    Node* temp = head, *prev = NULL;

    // beg
    if (position == 1) {
        if (temp == NULL) {
            cout << "list is empty. Deletion failed" << endl;
            return;
        }
        head = temp->next;
        delete temp;
        return;
    } else if (position >= 2) {
    // middle
        int k = 1;
        while (temp != NULL && k < position) {
            k++;
            prev = temp;
            temp = temp->next;
        }
        if (temp != NULL) {
            prev->next = temp->next;
            delete temp;
        } else {
            cout << "Invalid position. Deletion failed." << endl;
        }
    } else {
    // end
        if (temp == NULL) {
            cout << "list is empty. Deletion failed" << endl;
            return;
        }

        while (temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = NULL;
        delete temp;
        return;
    }
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

void lengthList() {
    Node* p = head;
    int L = 0;
    if (head == NULL) {
        cout << "list is empty";
    }
    while (p != NULL) {
        L++;
        p = p->next;
    }
    cout << "length:" << L << endl;
}

void reverse() {
    Node* current = head;
    Node* prev = NULL;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}

int main() {
    int choice, data, position;

    do {
        cout << "1. Create List\n"
             << "2. Insert Node at position\n"
             << "3. Delete\n"
             << "4. Search\n"
             << "5. Display\n"
             << "6. List Length\n"
             << "7. Reverse\n"
             << "0. Exit\n"
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
                cout << "Enter position to insert: ";
                cin >> position;
                insert(data, position);
                break;

            case 3:
                cout << "Enter position to delete: ";
                cin >> position;
                del(position);
                break;

            case 4:
                cout << "Enter data to search: ";
                cin >> data;
                search(data);
                break;

            case 5:
                cout << "Linked List: ";
                traverse();
                break;

            case 6:
                cout << "List Length: ";
                lengthList();
                break;

            case 7:
                cout << "Reversing the List." << endl;
                reverse();
                break;

            case 0:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
                break;
        }

    } while (choice != 0);

    // Memory cleanup
    Node* current = head;
    while (current != NULL) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}
