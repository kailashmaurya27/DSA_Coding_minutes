#include<iostream>
using namespace std;

class List;

class Node{
public:
    int data;
    Node* next;
    Node(int d): data(d), next(NULL){}

    // getter function
    int getData(){
        return data;
    }
    ~Node(){
        if(next!=NULL){
            delete next;
        }
        cout<<"Deleting node with "<<data<<endl;
    }

    friend class List;

};

class List{
    Node* head;
    Node* tail; 



public:

    List(): head(NULL), tail(NULL){}

    Node* begin(){
        return head;
    }

    void push_front(int data){
        if(head==NULL){
            Node* n = new Node(data);
            head=tail=n;
        }
        else{
            Node* n = new Node(data);
            n->next = head;
            head = n;
        }
    }

    void push_back(int data){
        if(head==NULL){
            Node* n = new Node(data);
            head=tail=n;
        }
        else{
            Node* n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }

    void insert(int data, int pos){
        if(pos==0){
            push_front(data);
            return;
        }

        Node* temp = head;
        for(int jump = 1; jump <= pos - 1; jump++){
            temp = temp->next;
        }

        Node* n = new Node(data);
        n->next = temp-> next;
        temp->next = n;
    }

    bool search(Node* head, int key){
        Node* temp = head;
    
        while(head!=NULL){
            if(temp->data == key){
                return true;
            }
            temp = temp->next;
        }
        
        return false;
    }

    bool searchRecursive(Node*head, int key){
        if(head==NULL){
            return false;
        }
        if(head->data==key){
            return true;
        }
        else{
            return searchRecursive(head->next, key);
        }
    }

    int search1(int key){
        Node* temp = head;
        int idx = 0;

        while(head!=NULL){
            if(temp->data == key){
                return idx;
            }
            idx++;
            temp = temp->next;
        }

        return -1;
    }

    void pop_front(){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void remove(int pos){
        Node* temp = head;
        for(int jump = 1; jump<= pos -1; jump++){
            temp = temp-> next;
        }
        Node* n;
        n = temp->next;
        temp->next = n->next;
        n->next = NULL;
        delete n;
    }

    void reverse(Node* head){

        Node * P = NULL;
        Node * C = head;
        Node* N;

        while(C!=NULL){
            N = C->next;
            C->next = P;
            P = C;
            C = N;
        }
        head = P;
    }

    void circularLinkedList(Node* head){
        Node * p = head;
        do{
            cout<<"Element is "<<p->data<<endl;
            p->next;
        }while(p != head);
    }


    // for circular linked list 
    Node* insertatFirst(Node* head, int data){
        Node* ptr = new Node(data);
        ptr->data = data;
        Node* p = head->next;
        while(p->next!= head){
            p = p->next;
        }

        p->next = ptr;
        ptr-> next = head;
        head = ptr;
        return head;
    }

    ~List(){
        if(head!=NULL){
            delete head;
            head = NULL;
        }
    }

};







int main(){

    List l;
    Node* head = l.begin();
    l.push_front(1);
    l.push_front(0);
    l.push_back(3);
    l.insert(2,2);
    l.insert(10,0);
    // l.pop_front();
    // Node* head = NULL;
      
    l.reverse(head);
    while(head!=NULL){
        cout<<head->getData()<<"->";
        head = head->next;
    }
    cout<<endl;
    

    // l.remove(3);

    
    

    // Node* head = NULL;
    // if(l.search(head, 3)){
    //     cout<<"Element found at "<<l.search1(3);
    // }
    // else{
    //     cout<<"Element not found";
    // }


return 0;
}