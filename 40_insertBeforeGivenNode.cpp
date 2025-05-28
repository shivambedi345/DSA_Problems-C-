#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to insert a node with value x before node with value key
void beforeGivenNode(Node* &head, int x, int key) {
    Node* temp = new Node(x);

    // If list is empty
    if (head == NULL) return;

    // If the node to insert before is the head
    if (head->data == key) {
        temp->next = head;
        head = temp;
        return;
    }

    Node* prev = NULL;
    Node* curr = head;

    // Traverse the list to find the node with value == key
    while (curr != NULL && curr->data != key) {
        prev = curr;
        curr = curr->next;
    }

    // If key not found
    if (curr == NULL) {
        delete temp;
        return;
    }

    // Insert temp before current (i.e., after prev)
    prev->next = temp;
    temp->next = curr;
}

// Function to print the list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create a single node
    Node* node1 = new Node(8);
    Node* head = node1;

    // Insert 9 before 8
    beforeGivenNode(head, 9, 8);

    printList(head); // Output: 9 8

    return 0;
}

 
    