#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int data) {
    Node* node = new Node;
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return newNode(value);
    } else if (value <= root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

Node* findMinValueNode(Node* root) {
    Node* current = root;
    while (current->left != nullptr) {
        current = current->left;
    }
    return current;
}

Node* findMaxValueNode(Node* root) {
    Node* current = root;
    while (current->right != nullptr) {
        current = current->right;
    }
    return current;
}

Node* deleteNode(Node* root, int value) {
    if (root == nullptr) {
        return root;
    } else if (value < root->data) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    } else {
        //case-1 (no child)
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        //case-2 (one child)
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        // case 3 (two child)
        } else {
            Node* temp = findMinValueNode(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

bool search(Node* root, int value) {
    if (root == nullptr) {
        return false;
    }
    if (value == root->data) {
        return true;
    } else if (value < root->data) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
}

void traverseInOrder(Node* root) {
    if (root != nullptr) {
        traverseInOrder(root->left);
        cout << root->data << " ";
        traverseInOrder(root->right);
    }
}

void deleteTree(Node* root) {
    if (root != nullptr) {
        deleteTree(root->left);
        deleteTree(root->right);
        delete root;
    }
}

int main() {
    Node* root = nullptr;
    int choice, value;

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
                cout << "Enter value to insert: ";
                cin >> value;
                root = insert(root, value);
                break;

            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                root = deleteNode(root, value);
                break;

            case 3:
                cout << "Enter value to search: ";
                cin >> value;
                cout << (search(root, value) ? "Found" : "Not Found") << endl;
                break;

            case 4:
                {
                    Node* minValueNode = findMinValueNode(root);
                    cout << "Min Value in the tree: " << minValueNode->data << endl;
                }
                break;

            case 5:
                {
                    Node* maxValueNode = findMaxValueNode(root);
                    cout << "Max Value in the tree: " << maxValueNode->data << endl;
                }
                break;

            case 6:
                cout << "In-order traversal: ";
                traverseInOrder(root);
                cout << endl;
                break;

            case 7:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 7);

    // Clean up memory before exiting
    deleteTree(root);

    return 0;
}
