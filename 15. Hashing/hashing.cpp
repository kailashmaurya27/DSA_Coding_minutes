#include<iostream>
#include<cstring>
using namespace std;

template<typename T> 
class Node{
public:

    string key;
    T val;
    Node* next;


    Node (string key, T val){
        this->key = key;
        this->val = val;
        next = NULL;
    }

    ~Node(){
        if(next!=NULL){
            delete next;
        }
    }

};

template<typename T> 
class Hashtable{
    Node<T> ** table;
    int cs;
    int ts;

    int hashfn(string key){
        int idx = 0;
        int power = 1;
        for(auto ch : key){
            idx = (idx + ch*power)%ts;
            power = (power*29)%ts;
        }
        return idx;
    }

public:
    Hashtable(int default_size = 7){
        cs = 0;
        ts = default_size;
        table = new Node<T>*[ts];
        for(int i = 0; i < ts; i++){
            table[i] = NULL;
        }
    }

    void insert(string key, T val){
        int idx = hashfn(key);
        Node<T> * n = new Node<T>(key,val);

        n->next = table[idx];
        table[idx] = n;

        cs++;
        float load_factor = cs/float(ts);
        if(load_factor > 0.7){
            rehash();
        }
    }

    void rehash(){
        Node<T> **oldTable = table;
        int oldTs = ts;

        cs = 0;
        ts = 2*ts + 1;
        table = new Node<T>*[ts];

        for(int i = 0; i < ts; i++){
            table[i] = NULL;
        }

        for(int i = 0; i < oldTs; i++){
            Node<T> *temp = oldTable[i];

            while(temp!=NULL){
                string key = temp->key;
                T val = temp->val;
                // happen in the new table
                insert(key, val);
                temp = temp->next;
            }

            // destroy the ith linked list
            if(oldTable[i]!=NULL){
                delete oldTable[i];
            }
        }

        delete[] oldTable;
    }

    void print(){
        for(int i = 0; i < ts; i++){
            cout<<"Bucket "<<i<<"->";
            Node<T> *temp = table[i];
            while(temp!=NULL){
                cout<< temp->key <<"->";
                temp = temp-> next;
            }
            cout<<endl;
        }
    }


};


int main(){
    Hashtable<int> h;
    h.insert("mango", 100);
    h.insert("apple", 120);
    h.insert("banana", 140);
    h.insert("orange", 200);

    h.print();
    

    return 0;
}