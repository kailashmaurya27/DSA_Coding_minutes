#include <bits/stdc++.h>
using namespace std;

// forward Declaration
// class list;

class Node
{
public:
    int data;
    Node *next;
    Node(int d) : data(d), next(NULL) {}

    int getData()
    {
        return data;
    }
    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
        cout << "Deleting Node with Data " << data << endl;
    }

    // friend class list;
};

class linkedlist
{

    Node *head;
    Node *tail;

    int searchHelper(Node *start, int key)
    {
        // base case
        if (start == NULL)
        {
            return -1;
        }
        // value matches
        if (start->data == key)
        {
            return 0;
        }
        // rec case
        int subIdx = searchHelper(start->next, key);
        if (subIdx == -1)
        {
            return -1;
        }
        return subIdx + 1;
    }

public:
    linkedlist() : head(NULL), tail(NULL) {}

    Node *begin()
    {
        return head;
    }

    void push_front(int data)
    {

        // when there is no linked list then this case would happen
        if (head == NULL)
        {
            Node *n = new Node(data);
            head = tail = n;
        }

        // when there exist a linked list then this case would happen
        else
        {
            Node *n = new Node(data);
            n->next = head;
            head = n;
        }
    }

    void push_back(int data)
    {
        if (head == NULL)
        {
            Node *n = new Node(data);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }

    void insert(int data, int pos)
    {
        if (pos == 0)
        {
            push_front(data);
            return;
        }
        Node *temp = head;
        for (int jump = 1; jump < pos; jump++)
        {
            temp = temp->next;
        }

        Node *n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }

    int search(int key)
    {
        Node *temp = head;
        int idx = 0;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }
            idx++;
            temp = temp->next;
        }
        return -1;
    }

    int recursiveSearch(int key)
    {
        int idx = searchHelper(head, key);
        return idx;
    }

    void pop_front()
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    // void removeNode(int key){
    //     // Node * n = new Node(data);
    //     n = temp->next;
    //     temp->next = n-> next;
    //     n->next = NULL;
    // }

    void reverse(Node *&head)
    {
        Node *C = head;
        Node *P = NULL;
        Node *N;

        while (C != NULL)
        {
            N = C->next;
            C->next = P;

            P = C;
            C = N;
        }
        head = P;
    }

    ~linkedlist()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }
};

int main()
{

    linkedlist l;
    l.push_front(1);
    l.push_front(0);
    l.push_back(3);
    l.push_back(4);
    l.insert(2, 2);
    l.insert(10, 0);
    // l.pop_front();
    // // l.removeNode(1);

    Node *head = l.begin();
    // cin>>head;

    // while (head != NULL)
    // {
    //     cout << head->getData() << "-> ";
    //     head = head->next;
    // }
    // cout<<endl;

    l.reverse(head);

    while (head != NULL)
    {
        cout << head->getData() << "-> ";
        head = head->next;
    }

    // cout<<endl;
    // int key;
    // cin>>key;

    // cout<< l.recursiveSearch(key)<<endl;
    // cout<<endl;

    return 0;
}
