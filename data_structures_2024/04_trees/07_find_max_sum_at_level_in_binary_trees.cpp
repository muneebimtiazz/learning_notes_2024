#include <iostream>
#include <Queue>
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

int maxSumAtAnyLevel(Node* root) {
    if (root == nullptr)
        return 0;
    int maxSum = INT_MIN;

    queue<Node*> Q;
    Q.push(root);

    while (!Q.empty()) {
        int levelSize = Q.size();
        int levelSum = 0;

        for (int i = 0; i < levelSize; i++) {
            Node* current = Q.front();
            Q.pop();

            levelSum += current->data;

            if (current->left)
                Q.push(current->left);
            if (current->right)
                Q.push(current->right);
        }

        maxSum = max(maxSum, levelSum);
    }

    return maxSum;
}

int main() {
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    int result = maxSumAtAnyLevel(root);

    cout << "Maximum sum at any level: " << result << endl;

    return 0;
}
