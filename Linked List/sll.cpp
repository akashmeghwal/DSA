#include<iostream>
using namespace std;

class Node{
    public:
        //values
        int data;
        Node *next;

        //default ctor
        Node(){
            this->next=nullptr;
        }
        //param ctor
        Node(int data){
            this->data = data;
            this->next = nullptr;
        }

        //dtor
        ~Node(){
            delete next;
        }
};

void printLL(Node* &head){
    Node *temp = head;
    while(temp!=nullptr){
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int getLen(Node* &head){
    Node *temp = head;
    int cnt = 0;
    while(temp!=nullptr){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
//insertion
void insertAtHead(Node* &head,Node* &tail,int data){
    if (head == nullptr){
        Node *newNode = new Node(data); 
        head = newNode;
        tail = newNode;
    }
    else{
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}
void insertAtTail(Node* &head,Node* &tail,int data){
    if (head == nullptr){
        Node *newNode = new Node(data); 
        head = newNode;
        tail = newNode;
    }
    else{
        Node *newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
}
void insertAtPos(Node* &head,Node* &tail,int data,int pos){
    int n = getLen(head);
   
    if (pos <= 0 ||pos>n+1)
    {
        cout << "ERROR:TRY TO INSERT AT INVALID INDEX" << endl;
    }

    if (head == nullptr){
        Node *newNode = new Node(data); 
        head = newNode;
        tail = newNode;
    }
    else if(pos==1){
        insertAtHead(head, tail, data);
    }
    else if(pos==n+1){
        //is case me galti hogi
        insertAtTail(head, tail, data);
    }
    else{
        Node *prev = nullptr;
        Node *curr = head;
        while(pos!=1){
            prev = curr;
            curr = curr ->next;
            pos--;
        }
        Node *newNode = new Node(data);
        prev->next = newNode;
        newNode->next = curr;
    }
}

//deletion
void deletNode(Node* &head,Node* &tail,int pos){
    int n = getLen(head);
    if (pos <= 0 || pos > n)
    {
        cout << "ERROR:INVALID INDEX" << endl;
    }

    if (head == nullptr){
        cout << "ERROR:TRY TO DELETE AN EMPTY LL" << endl;
    }
    
    if(pos==1){
        Node *temp = head->next;
        head->next = nullptr;
        delete head;
        head = temp;
    }
    else if(pos==n){
        Node *prev = nullptr;
        Node *curr = head;
        while(pos!=1){
            prev = curr;
            curr = curr->next;
            pos--;
        }
        prev->next = nullptr;
        delete curr;
        tail = prev;
    }
    else{
        Node *prev = nullptr;
        Node *curr = head;
        while (pos != 1)
        {
            prev = curr;
            curr = curr->next;
            pos--;
        }
        prev->next = curr->next;
        curr->next = nullptr;
        delete curr;
    }
}

int main(){
    Node *head = nullptr;
    Node *tail = nullptr;
    //insertion at head
    // insertAtTail(head, tail, 55);
    insertAtHead(head, tail, 50);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    //insertion at tail
    insertAtTail(head, tail, 60);
    insertAtTail(head, tail, 70);
    insertAtTail(head, tail, 80);
    insertAtTail(head, tail, 90);
    insertAtTail(head, tail, 100);

    // Node *second = new Node(20);
    // Node *third = new Node(30);
    // Node *fourth = new Node(40);
    // Node *fifth = new Node(50);
    
    //connecting nodes
    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;

    printLL(head);
    cout << "::: " << getLen(head) << endl;

    deletNode(head,tail,8);
    printLL(head);
    cout << "::: " << getLen(head) << endl;
    
}