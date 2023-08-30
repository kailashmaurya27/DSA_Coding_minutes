#include<iostream>
#include<vector>
using namespace std;

class Node{
public:

    int key;
    Node* left;
    Node* right;

    Node(int key){
        this->key = key;
        left = right =NULL;
    }
};


Node* insert(Node* root, int key){
    if(root==NULL){
        return new Node(key);
    }
    if(key < root->key){
        root->left = insert(root->left, key);
    }
    if(key > root->key){
        root->right = insert(root->right, key);
    }
    return root;
}

void printInorder(Node*root){
    if(root == NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->key<<" ";
    printInorder(root->right);
}


// Time Complexity is O(Height);
bool search(Node* root, int key){
    if(root == NULL){
        return false;
    }
    if(root->key == key){
        return true; 
    }
    if(key < root->key){
        return search(root->left, key);
    }
    return search(root->right, key);
    
}

Node * findMin(Node * root){
    while(root->left!=NULL){
        root = root->left;
    }
    return root;
}

Node * remove(Node*root, int key){
    if(root == NULL){
        return NULL;
    }
    else if(key< root->key){
        root->left = remove(root->left, key);
    }
    else if(key > root->key){
        root->right = remove(root->right, key);
    }
    else{
        if(root->left == NULL and root->right == NULL){
            delete root;
            root = NULL;
        }
        else if(root->left == NULL){
            Node * temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL){
            Node*temp = root;
            root = root->left;
            delete temp;
        }
        else{
            Node * temp = findMin(root->right);
            root->key = temp->key;
            root->right = remove(root->right, temp->key);
        }
    }
    return root;
}

void printRange(Node * root, int k1, int k2 ){
    if(root == NULL){
        return;
    }
    if(root->key >= k1 and root->key <= k2){
        printRange(root->left, k1, k2);
        cout<<root->key<<" ";
        printRange(root->right, k1, k2);
    }
    else if(root->key > k2){
        printRange(root->left, k1, k2);
    }
    else{
        printRange(root->right, k1, k2);
    }
}

void printRoot2LeafPaths(Node* root, vector<int> &path){
    if(root==NULL){
        return;
    }

    if(root->left==NULL and root->right == NULL){
        for(int node:path){
            cout<<node<<"->";
        }
        cout<<endl;
        cout<<root->key<<" ";
        return;
    }

    path.push_back(root->key);
    printRoot2LeafPaths(root->left, path);
    printRoot2LeafPaths(root->right, path);

    path.pop_back();
}

int main(){

    Node * root = NULL;
    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};

    for (int x : arr){
        root = insert(root, x);
    }
    printInorder(root);
    cout<<endl;

    // int key;
    // cin>>key;
    // root = remove(root, key);
    // printInorder(root);

    // cout<<search(root, key)<<endl;
    int k1;
    int k2;

    printRange(root,3,12);

return 0;
}