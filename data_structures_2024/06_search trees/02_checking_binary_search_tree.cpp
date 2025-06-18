#include <iostream>
#include <climits>
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

// Approach 1: Using a recursive utility function
bool isBSTUtil(Node* root, int& prev) {
    if (root == nullptr)
        return true;
    // Traverse the left subtree
    if (!isBSTUtil(root->left, prev))
        return false;
    // Check if the current node's value is greater than the previous one
    if (root->data <= prev)
        return false;
    // Update the previous value
    prev = root->data;
    // Traverse the right subtree
    return isBSTUtil(root->right, prev);
}

// Approach 2: In-order traversal
void traverseInOrder(Node* root) {
    if (root != nullptr) {
        traverseInOrder(root->left);
        cout << root->data << " ";
        traverseInOrder(root->right);
    }
}

// Check if the given tree is a BST using Approach 1
bool isBSTApproach1(Node* root) {
    int prev = INT_MIN; // Initialize with the minimum possible value
    return isBSTUtil(root, prev);
}

// Check if the given tree is a BST using Approach 2
bool isBSTApproach2(Node* root) {
    traverseInOrder(root);
    return true;
}

int main() {
    Node* root = nullptr;

    root = insert(root, 4);
    root = insert(root, 2);
    root = insert(root, 6);
    root = insert(root, 1);
    root = insert(root, 3);
    root = insert(root, 5);
    root = insert(root, 7);

    // Check if the tree is a BST using Approach 1
    if (isBSTApproach1(root)) {
        cout << "Approach 1: The tree is a Binary Search Tree.\n";
    } else {
        cout << "Approach 1: The tree is not a Binary Search Tree.\n";
    }

    // Check if the tree is a BST using Approach 2
    if (isBSTApproach2(root)) {
        cout << "Approach 2: The tree is a Binary Search Tree.\n";
    } else {
        cout << "Approach 2: The tree is not a Binary Search Tree.\n";
    }

    return 0;
}
