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

void insertAtHead(Node* &head, int d) {
    // Create a new node
    // and point it to the current head
    Node* temp = new Node(d);
    temp->next = head; // Point new node to current head
    head = temp; // Update head to new node
}
// Function to print the linked list
void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(Node* &tail, int d) {
    // Create a new node
    Node* temp = new Node(d);
    tail->next = temp; // Point current tail to new node
    tail = temp; // Update tail to new node
}
 
void insertatposition(Node* & tail, Node* & head, int position, int d){
    if (position == 1) {
        insertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while (cnt < position - 1) {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL) {
        insertAtTail(temp, d);
        return;
    }
    // Create a new node
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next; // Point new node to next node
    temp->next = nodeToInsert; // Point current node to new node
}

int main() {
    // Create a new node
    Node* node1 = new Node(11);
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node* head = node1; // Initialize head with the first node
    print(head); // Print the linked list
    insertAtHead(head, 12); // Insert at head
    print(head); // Print the linked list again

    Node* tail = head; // Initialize tail with the head

    // Move tail to the last node
    while (tail->next != NULL) {
        tail = tail->next;
    }

    insertAtTail(tail, 13); // Insert at tail
    print(head); // Print the linked list again

    cout << endl;
    insertatposition(tail, head, 2, 14); // Insert at position 2
    print(head); // Print the linked list again

    cout << endl;
    insertatposition(tail, head, 3, 15); // Insert at position 3
    print(head); // Print the linked list again

    return 0;
}
