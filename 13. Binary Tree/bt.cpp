
#include<iostream>
#include<queue>
using namespace std;

class Node{
public:

    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        left=right=NULL; 
    }
};



Node * buildTree(){

    int d;
    cin>>d;

    if(d == -1){
        return NULL;
    }

    Node* n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}


// This is known as PREORDER BUILD of the TREE, in which we first build ROOT NODE then LEFT TREE then RIGHT TREE

void printPreOrder(Node * root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}


// This is known as INORDER BUILD of the TREE, in which we first build LEFT TREE then ROOT NODE then RIGHT TREE

void printInOrder(Node * root){
    if(root == NULL){
        return;
    }
    printInOrder(root->left);
    cout<<root->data<<" ";
    printInOrder(root->right);
}


// This is known as POSTORDER BUILD of the TREE, in which we first build LEFT TREE then RIGHT TREE then ROOT NODE.

void printpostOrder(Node * root){
    if(root == NULL){
        return;
    }
    printpostOrder(root->left);
    printpostOrder(root->right);
    cout<<root->data<<" ";
}

void levelOrder(Node * root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        if(temp == NULL){
            cout << endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    return;

}

Node * buildlevelTree(){

    int d;
    cin>>d;

    Node * root = new Node(d);
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* current = q.front();
        q.pop();

        int c1, c2;
        cin>>c1>>c2;
        if(c1!=-1){
            current->left = new Node(c1);
            q.push(current->left);
        }
        if(c2!=-1){
            current->right = new Node(c2);
            q.push(current->right);
        }
    }
    return root;
}

int height(Node * root){
    if(root == NULL){
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);

    return 1 + max(h1,h2);
}



int main(){

    Node* root = buildlevelTree();
    // printPreOrder(root);
    // printInOrder(root);
    // printpostOrder(root);
    levelOrder(root);
    height(root);
    

    return 0;
}

// 1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1