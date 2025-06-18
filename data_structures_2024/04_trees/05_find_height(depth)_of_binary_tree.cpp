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

int FindHeight(Node* root) {
    if (root == nullptr) {
        return -1;
    } else {
        return max(FindHeight(root->left), FindHeight(root->right)) + 1;
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
    root->right->right->right = createNode(8);

    cout << "Height of the tree: " << FindHeight(root) << endl;

    return 0;
}
