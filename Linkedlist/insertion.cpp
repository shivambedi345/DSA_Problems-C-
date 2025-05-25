#include <iostream>
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

    // Destructor
    ~Node() {
        cout << "Memory free for node with data: " << data << endl;
    }
};

void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertatposition(Node* &tail, Node* &head, int position, int d) {
    if (position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1 && temp->next != NULL) {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node* &head) {
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* curr = head;
    Node* prev = NULL;
    int cnt = 1;

    while (cnt < position && curr != NULL) {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    if (curr != NULL) {
        prev->next = curr->next;
        delete curr;
    }
}

int main() {
    Node* node1 = new Node(11);
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node* head = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);

    Node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }

    insertAtTail(tail, 13);
    print(head);

    cout << endl;
    insertatposition(tail, head, 2, 14);
    print(head);

    cout << endl;
    insertatposition(tail, head, 3, 15);
    print(head);

    cout << endl;
    deleteNode(2, head);
    print(head);

    // Free the entire list manually
    while (head != NULL) {
        deleteNode(1, head);
    }

    return 0;
}

/*
#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    // Constructor

    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// traversing the linked list
void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// function to insert a node at the head of the linked list
int  getLength(Node* head) {
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertathead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    if (head != NULL) {
        head->prev = temp;
    }
    head = temp;
}
void insertattail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertatposition(Node* &tail, Node* &head, int position, int d) {
    if (position == 1) {
        insertathead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1 && temp->next != NULL) {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL) {
        insertattail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);

    cout<< "Length of the linked list: " << getLength(head) << endl;
    insertathead(head, 13);
    print(head);

    insertathead(head, 14);
    print(head);

    insertathead(head, 15);
    print(head);

    insertattail(tail, 20);
    print(head);

    insertatposition(tail, head, 2, 25);
    print(head);

    insertatposition(tail, head, 3, 30);
    print(head); 
    
    return 0;
}
*/
