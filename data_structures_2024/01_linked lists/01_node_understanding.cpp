#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *next;  //Node type pointer *next
};

int main() {
    // Creating nodes
    Node node1 = {1, nullptr};  // First node with data 1 and next set to nullptr
    Node node2 = {2, nullptr};  // Second node with data 2 and next set to nullptr

    // nexting nodes
    node1.next = &node2;  // linking the first node to the second node

    // Accessing data
    cout << "Data in node1: " << node1.data << endl;
    cout << "Data in node2: " << node1.next->data << endl;

    return 0;
}
