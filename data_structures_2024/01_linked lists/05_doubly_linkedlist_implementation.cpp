#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* head = NULL;

void create(int d) {
    Node* NN = new Node;
    NN->data = d;
    NN->next = NULL;
    NN->prev = NULL;

    if (head == NULL)
        head = NN;
    else {
        Node* p = head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = NN;
        NN->prev = p;
    }
}

void insert(int d, int position) {
    Node* NN = new Node;
    NN->data = d;
    NN->next = NULL;
    NN->prev = NULL;

    //beg
    if (position == 1) {
        NN->next = head;
        if (head != NULL) {
            head->prev = NN;
        }
        head = NN;
    } else if (position >= 2) {
    //middle
        Node* p = head;
        int k = 1;
        while ((p != NULL) && (k < position - 1)) {
            k++;
            p = p->next;
        }
        NN->next = p->next;
        NN->prev = p;
        if (p->next != NULL) {
            p->next->prev = NN;
        }
        p->next = NN;
    } else {
    //end
        if (head == NULL)
            head = NN;
        else {
            Node* p = head;
            while (p->next != NULL) {
                p = p->next;
            }
            p->next = NN;
            NN->prev = p;
        }
    }
}

void del(int position) {
    Node* temp = head;

    //beg
    if (position == 1) {
        if (temp == NULL) {
            cout << "list is empty. Deletion failed" << endl;
            return;
        }
        head = temp->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
    } else if (position >= 2) {
    //middle
        int k = 1;
        while (temp != NULL && k < position) {
            k++;
            temp = temp->next;
        }
        if (temp != NULL) {
            if (temp->prev != NULL) {
                temp->prev->next = temp->next;
            }
            if (temp->next != NULL) {
                temp->next->prev = temp->prev;
            }
            delete temp;
        } else {
            cout << "Invalid position. Deletion failed." << endl;
        }
    } else {
    //end
        if (temp == NULL) {
            cout << "list is empty. Deletion failed" << endl;
            return;
        }

        while (temp->next != NULL) {
            temp = temp->next;
        }

        if (temp->prev != NULL) {
            temp->prev->next = NULL;
        }
        delete temp;
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

void reverseTraverse() {
    Node* p = head;
    if (head == NULL) {
        cout << "list is empty";
    }

    while (p->next != NULL) {
        p = p->next;
    }

    while (p != NULL) {
        cout << p->data << " ";
        p = p->prev;
    }

    cout << endl;
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
             << "7. Reverse Display\n"
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
                cout << "Reverse Linked List: ";
                reverseTraverse();
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
