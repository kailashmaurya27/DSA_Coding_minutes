#include <bits/stdc++.h>
using namespace std;

class Node
{
    char data;
    unordered_map<char, Node *> m;
    bool isTerminal;

public:
    Node(char d)
    {
        data = d;
        isTerminal = false;
    }

    friend class Trie;
};

class Trie
{
    Node *root;
    // Insertion
public:
    Trie()
    {
        root = new Node('\0');
    }

    void insert(string word)
    {
        Node *temp = root;
        for (char ch : word)
        {
            if (temp->m.count(ch) == 0)
            {
                Node *n = new Node(ch);
                temp->m[ch] = n;
            }
            temp = temp->m[ch];
        }
        temp->isTerminal = true;
    }

    bool search(string word)
    {
        Node *temp = root;
        for (char ch : word)
        {
            if (temp->m.count(ch) == 0)
            {
                return false;
            }
            temp = temp->m[ch];
        }
        return temp->isTerminal;
    }
};

int main()
{
    string words[] = {"hello", "hell", "he","no"};  // TC- O(NL), N = number of iteerations to build query, L = Length of the word
    Trie t;

    for(auto word : words){
        t.insert(word);
    }

    string key;
    cin>>key;

    cout<<t.search(key)<<endl; //TC- O(L);
    

    return 0;
}

/*  
    <div class="container" id="cont1">
        <h3>This is my heading</h3>
        <p>
            Lorem ipsum dolor sit amet consectetur adipisicing elit. Ullam, minima
            pariatur! Quibusdam consequatur sint totam maiores dolorum error
            inventore omnis, hic aliquam accusantium, voluptate, tempore nulla
            quidem reiciendis perspiciatis quia ipsa cum quaerat esse?
        </p>
        <a href="https://www.google.com/" class="btn">Contact us</a>
        <button class="btn">Read More</button>
    </div>
*/