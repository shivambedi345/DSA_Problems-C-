// C++ program for insertion in a single linked
// list at a specified position
#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

// function to insert a Node at required position
Node *insertPos(Node *head, int pos, int data) {

    // This condition to check whether the
    // position given is valid or not.
    if (pos < 1)
        return head;

    // head will change if pos=1
    if (pos == 1) {
        Node *newNode = new Node(data);
        newNode->next = head;
        return newNode;
    }

    Node *curr = head;

    // Traverse to the node that will be
    // present just before the new node
    for (int i = 1; i < pos - 1 && curr != nullptr; i++) {
        curr = curr->next;
    }
    
    // If position is greater than the 
    // number of nodes
    if (curr == nullptr) 
        return head;
        
    Node *newNode = new Node(data);

    // update the next pointers
    newNode->next = curr->next;
    curr->next = newNode;

    return head;
}

void printList(struct Node *head) {
    Node *curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {

    // Creating the list 3->5->8->10
    Node *head = new Node(3);
    head->next = new Node(5);
    head->next->next = new Node(8);
    head->next->next->next = new Node(10);

    int data = 12, pos = 3;
    head = insertPos(head, pos, data);
    printList(head);

    return 0;
}