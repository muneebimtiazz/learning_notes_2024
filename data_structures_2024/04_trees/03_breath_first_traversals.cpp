#include <iostream>
#include <queue>
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

void levelOrderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    queue<Node*> Q;
    Q.push(root);
    while (!Q.empty()) {
        Node* current = Q.front();
        cout << current->data << " ";
        if (current->left != nullptr) {
            Q.push(current->left);
        }
        if (current->right != nullptr) {
            Q.push(current->right);
        }
        Q.pop();
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

    // Perform Level Order Traversal
    cout << "Level Order Traversal: ";
    levelOrderTraversal(root);
    cout << endl;

    return 0;
}
