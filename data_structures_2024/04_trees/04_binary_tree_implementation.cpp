#include <iostream>
#include <cstdlib>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* NN = new Node;
    NN->data = data;
    NN->left = NN->right = nullptr;
    return NN;
}

Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return createNode(data);
    }

    // Insert at the first available position (left to right)
    if (rand() % 2 == 0) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }

    return root;
}

bool search(Node* root, int data) {
    if (root == nullptr) {
        return false;
    }
    if (root->data == data) {
        return true;
    }
    return search(root->left, data) || search(root->right, data);
}

Node* deleteNode(Node* root, int data) {
    if (root == nullptr) {
        return nullptr;
    }

    if (root->data == data) {
        delete root;
        return nullptr; // Node deleted
    }

    root->left = deleteNode(root->left, data);
    root->right = deleteNode(root->right, data);

    return root;
}

void inorderTraversal(Node* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main() {
    Node* root = nullptr;

    root = insert(root, 1);
    insert(root, 2);
    insert(root, 3);
    insert(root, 4);

    cout << "Inorder traversal: ";
    inorderTraversal(root);
    cout << endl;

    int keyToSearch = 3;
    cout << "Search for " << keyToSearch << ": " << (search(root, keyToSearch) ? "Found" : "Not Found") << endl;

    int keyToDelete = 2;
    root = deleteNode(root, keyToDelete);
    
    cout << "Inorder traversal after deleting " << keyToDelete << ": ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
