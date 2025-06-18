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

Node* kthSmallestInBST(Node* root, int k, int& count) {
    if (root == nullptr)
        return nullptr;

    Node* left = kthSmallestInBST(root->left, k, count);
    if (left != nullptr)
        return left;

    if (++count == k)
        return root;

    return kthSmallestInBST(root->right, k, count);
}
Node* kthLargestInBST(Node* root, int k, int& count) {
    if (root == nullptr)
        return nullptr;

    Node* right = kthLargestInBST(root->right, k, count);
    if (right != nullptr)
        return right;

    if (++count == k)
        return root;

    return kthLargestInBST(root->left, k, count);
}

#include <iostream>

int main() {
    Node* root = nullptr;

    root = insert(root, 4);
    root = insert(root, 2);
    root = insert(root, 6);
    root = insert(root, 1);
    root = insert(root, 3);
    root = insert(root, 5);
    root = insert(root, 7);

    int k = 3; // Example value of k
    int count = 0;

    // Finding the kth smallest element
    Node* kthSmallest = kthSmallestInBST(root, k, count);
    if (kthSmallest != nullptr) {
        cout << "The " << k << "th smallest element in the BST is: " << kthSmallest->data << endl;
    } else {
        cout << "Invalid value of k or the BST doesn't have k elements." << endl;
    }

    // Reset count for kth largest element
    count = 0;

    // Finding the kth largest element
    Node* kthLargest = kthLargestInBST(root, k, count);
    if (kthLargest != nullptr) {
        cout << "The " << k << "th largest element in the BST is: " << kthLargest->data << endl;
    } else {
        cout << "Invalid value of k or the BST doesn't have k elements." << endl;
    }

    return 0;
}

