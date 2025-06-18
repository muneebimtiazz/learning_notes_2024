#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
};

Node *Insert(Node *root, int data) {
    if (root == NULL) {
        root = new Node;
        if (root == NULL) {
            cout << "Memory Error\n";
            return NULL;
        } else {
            root->data = data;
            root->left = root->right = NULL;
        }
    } else {
        if (data < root->data) {
            root->left = Insert(root->left, data);
        } else if (data > root->data) {
            root->right = Insert(root->right, data);
        }
    }
    return root;
}

Node *Delete(Node *root, int data) {
    Node *temp;

    if (root == NULL) {
        cout << "Element not found in the tree\n";
    } else if (data < root->data) {
        root->left = Delete(root->left, data);
    } else if (data > root->data) {
        root->right = Delete(root->right, data);
    } else {
        // Found element
        if (root->left && root->right) {
            // Replace with the largest in the left subtree
            temp = FindMax(root->left);
            root->data = temp->data;
            root->left = Delete(root->left, temp->data);
        } else {
            // One child or no child
            temp = root;
            if (root->left == NULL) {
                root = root->right;
            } else if (root->right == NULL) {
                root = root->left;
            }
            delete temp;
        }
    }
    return root;
}

Node *Find(Node *root, int data) {
    if (root == NULL)
        return NULL;
    if (data < root->data)
        return Find(root->left, data);
    else if (data > root->data)
        return Find(root->right, data);
    return root;
}

Node *FindMin(Node *root) {
    if (root == NULL)
        return NULL;
    else if (root->left == NULL)
        return root;
    else
        return FindMin(root->left);
}

Node *FindMax(Node *root) {
    if (root == NULL)
        return NULL;
    else if (root->right == NULL)
        return root;
    else
        return FindMax(root->right);
}

void PrintInOrder(Node *root) {
    if (root != NULL) {
        PrintInOrder(root->left);
        cout << root->data << " ";
        PrintInOrder(root->right);
    }
}

int main() {
    Node *root = NULL;
    int choice, data;

    do {
        cout << "\nBinary Search Tree Operations\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Find Min Value\n";
        cout << "5. Find Max Value\n";
        cout << "6. Print In-order\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to insert: ";
                cin >> data;
                root = Insert(root, data);
                cout << "Node with value " << data << " inserted.\n";
                break;

            case 2:
                cout << "Enter data to delete: ";
                cin >> data;
                root = Delete(root, data);
                cout << "Node with value " << data << " deleted.\n";
                break;

            case 3:
                cout << "Enter data to search: ";
                cin >> data;
                if (Find(root, data) != NULL)
                    cout << "Node with value " << data << " found.\n";
                else
                    cout << "Node with value " << data << " not found.\n";
                break;

            case 4:
                cout << "Minimum node value: " << FindMin(root)->data << endl;
                break;

            case 5:
                cout << "Maximum node value: " << FindMax(root)->data << endl;
                break;

            case 6:
                cout << "In-order traversal: ";
                PrintInOrder(root);
                cout << endl;
                break;

            case 7:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 7);

    return 0;
}
