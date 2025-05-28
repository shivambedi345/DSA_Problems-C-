// C++ Program to insert a node after a given node

#include <bits/stdc++.h>
using namespace std;

// Definition of a linked list node 
struct Node {
    int data;
    Node* next;

    // Constructor to initialize the node
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Function to insert a new node after a given node
Node* insertAfter(Node* head, int key, int newData) {
    Node* curr = head;

    // Iterate over Linked List to find the key
    while (curr != nullptr) {
        if (curr->data == key)
            break;
        curr = curr->next;
    }

    // if curr becomes NULL means, given key is not
    // found in linked list
    if (curr == nullptr) {
    	cout << "Node not found" << endl;  
        // Return the head of the original linked list
      	return head;
    }

    // Allocate new node and make the element to be inserted
    // as a new node
    Node* newNode = new Node(newData);

    // Set the next pointer of new node to the next pointer of given node
    newNode->next = curr->next;

  	// Change the next pointer of given node to the new node
    curr->next = newNode;
  	
  	// Return the head of the modified linked list
  	return head;
}

// Function to print the linked list
void printList(Node* node)
{
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
  	cout << endl;
}

// Driver code
int main() {

    // Create a hard-coded linked list:
	// 2 -> 3 -> 5 -> 6
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(5);
    head->next->next->next = new Node(6);

    cout << "Original Linked List: ";
    printList(head);

    // Key: Insert node after key
    int key = 3, newData = 4;

    // Insert a new node with data 4 after the node having
    // data 3
    head = insertAfter(head, key, newData);

    cout << "Linked List after insertion: ";
    printList(head);

    return 0;
}