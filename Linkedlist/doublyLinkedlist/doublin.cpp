#include<iostream>
using namespace std;
class Node{

    public:
    int data;
    Node* prev;
    Node*next;
    // Constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// traversing the linked list
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "";
        temp = temp->next;
        cout << " ";
    }
    
    
}

// function tom find length of linked list
int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertathead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    if(head != NULL){
        head->prev = temp;
    }
    head = temp;
    cout<< endl;
}

void insertattail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertatposition(Node* &tail, Node* &head, int position, int d){
    // inserting at the start
    if(position == 1){
        insertathead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    
    while(cnt < position - 1 && temp->next != NULL){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertattail(tail, d);
        return;
    }
    
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;

}
void deleteNode(int position, Node* &head){
    // deleting first node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return;
    }
    // deleting any other node
    Node* curr = head;
    Node* prev = NULL;
    int cnt = 1;

    while(cnt < position && curr != NULL){
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    if(curr != NULL){
        prev->next = curr->next;
        if(curr->next != NULL){
            curr->next->prev = prev;
        }
        delete curr;
    }
}

int main(){
    Node* node1 = new Node(11);
    Node* head = node1;
    Node* tail = head;
    print(head);
    cout << endl;
    insertathead(head, 12);
    print(head);
    cout << endl;
    insertathead(head, 13);
    print(head);

    insertattail(tail, 14); // pass tail, not head
    insertattail(tail, 20);

    print(head); // print from head

    insertatposition(tail, head, 2, 15);
    print(head);


    return 0;
}