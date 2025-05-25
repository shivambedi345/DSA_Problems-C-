#include<iostream>
using namespace std;
 class Node{
    public:
    int data;
    Node* next;
    // Constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    
    }
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        } 
        cout << "memory is free for node with data" << value << endl;
    }
 };

 void insertNode(Node* &tail, int element , int d){
    // empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        // non-empty list
        // assuming that the element is present in the list
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        // element found
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
 }
 // function to print the circular linked list
    void print(Node* tail){
        Node* temp = tail;
        if(tail == NULL){
            cout << "list is empty" << endl;
            return;
        }
        do{
            cout << tail->data << " ";
            tail = tail->next;
        }while(tail != temp);
        cout << endl;
    }

    // function to delete a node from the circular linked list
    void deleteNode(Node* &tail, int value){
        // empty list
        if(tail == NULL){
            cout << "list is empty" << endl;
            return;
        }
        // non-empty list
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }
        // 1 node linked list
        if(curr == prev){
            delete curr;
            tail = NULL;
        }
        else{
            prev->next = curr->next;
            delete curr;
        }
    }
    int main(){
        Node* tail = NULL;
        insertNode(tail, 5, 3);
        print(tail);
        insertNode(tail, 3, 4);
        print(tail);
        insertNode(tail, 4, 5); 
        print(tail);
        insertNode(tail, 5, 6);
        print(tail);
        deleteNode(tail, 3);
        print(tail);
        deleteNode(tail, 4);
        print(tail);
        deleteNode(tail, 5);
        print(tail);
        deleteNode(tail, 6);
        print(tail);

    }