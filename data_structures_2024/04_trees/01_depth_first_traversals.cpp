#include <iostream>
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

// Preorder traversal
void preorderTraversal(Node* node) {
    if (node == nullptr)
        return;

    cout << node->data << " ";
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}

// Postorder traversal
void postorderTraversal(Node* node) {
    if (node == nullptr)
        return;

    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout << node->data << " ";
}

// Inorder traversal
void inorderTraversal(Node* node) {
    if (node == nullptr)
        return;

    inorderTraversal(node->left);
    cout << node->data << " ";
    inorderTraversal(node->right);
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

    cout << "Inorder traversal: ";
    inorderTraversal(root);

    cout << "\nPreorder traversal: ";
    preorderTraversal(root);

    cout << "\nPostorder traversal: ";
    postorderTraversal(root);

    return 0;
}

// In BST tree Inorder Traversal: Visiting nodes in the order (left, root, right) results in elements being visited in ascending order.
// However, this property does not hold for a general binary tree (not necessarily a search tree). In a regular binary tree, where there are no specific ordering rules enforced on the structure, the inorder traversal does not guarantee any particular order.
