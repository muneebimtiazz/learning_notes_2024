#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

// Compute the number of nodes in a tree.
int SizeOfBinaryTree(Node* root) {
    // Base case: If the tree is empty (null root), return 0.
    if (root == NULL)
        return 0;
    else
        // Recursive case: Count the current node and recursively count nodes in the left and right subtrees.
        return (SizeOfBinaryTree(root->left) + 1 + SizeOfBinaryTree(root->right));
}

int main() {
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    // Call the function to compute the size of the binary tree
    int size = SizeOfBinaryTree(root);

    // Display the result
    cout << "Size of the binary tree: " << size << endl;

    return 0;
}
