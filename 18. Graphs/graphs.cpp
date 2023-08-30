#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *l;
public:
    Graph(int v){
        V = v;
        l = new list<int>[V];
    }
    void addedge(int i, int j,bool undir = true ){
        l[i].push_back(j);
        if(undir){
            l[j].push_back(i);
        }
    }

    void printAdjList(){
        for(int i = 0; i < V; i++){
            cout<<i<<"-->";
            for(auto node:l[i]){
                cout<<node<<",";
            }
            cout<<endl;
        }
    }



};



int main(){
    
    Graph g(6);

    g.addedge(0,1);
    g.addedge(0,4);
    g.addedge(2,1);
    g.addedge(3,4);
    g.addedge(4,5);
    g.addedge(2,3);
    g.addedge(3,5);

    g.printAdjList();

    return 0;
}