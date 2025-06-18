#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

void inorderTraversal(Node* root) {
    stack<Node*> s;
    Node* current = root;

    while (current != nullptr || !s.empty()) {
        while (current != nullptr) {
            s.push(current);
            current = current->left;
        }

        current = s.top();
        s.pop();

        cout << current->data << " ";

        current = current->right;
    }
}

void preorderTraversal(Node* root) {
    stack<Node*> s;
    s.push(root);

    while (!s.empty()) {
        Node* current = s.top();
        s.pop();

        if (current != nullptr) {
            cout << current->data << " ";

            // Push right child first, so that left child is processed first (LIFO)
            s.push(current->right);
            s.push(current->left);
        }
    }
}

void postorderTraversal(Node* root) {
    stack<Node*> s1, s2;
    s1.push(root);

    while (!s1.empty()) {
        Node* current = s1.top();
        s1.pop();

        if (current != nullptr) {
            s2.push(current);

            // Push left child first, so that right child is processed first (LIFO)
            s1.push(current->left);
            s1.push(current->right);
        }
    }

    while (!s2.empty()) {
        cout << s2.top()->data << " ";
        s2.pop();
    }
}

int main() {
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    cout << "Input data in order: 1,2,3,4,5,6,7 " << endl;

    cout << "Non recursive Inorder traversal: ";
    inorderTraversal(root);

    cout << "\nNon recursive Preorder traversal: ";
    preorderTraversal(root);

    cout << "\nNon recursivecPostorder traversal: ";
    postorderTraversal(root);

    return 0;
    return 0;
}

