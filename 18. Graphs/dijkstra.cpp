#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int>*l;

public:
    Graph(int v){
        V = v;
        // l = new list<int>[V];
    }
    void addedge(int u, int v,int wt, bool undir = true ){
        l[u].push_back({wt,v});
        if(undir){
            l[v].push_back({wt,u});
        }
    }

    int dijkstra(int src, int dest){
        vector<bool> dist(V, INT_MAX);
        set<pair<int,int>> s;

        dist[src] = 0;
        s.insert({0, src});

        while(!s.empty()){
            auto it = s.begin();
            int node = it->second;
            int disttillnow = it->first;
            s.erase(it);

            for(int nbrPair : l[node]){
                int nbr = nbrPair.second;
                int currentEdge = nbrPair.first;

                if(disttillnow + currentEdge < dist[nbr]){
                    auto f = s.find({dist[nbr], nbr});
                    if(f!=s.end()){
                        s.erase(f);
                    }
                    dist[nbr] = disttillnow + currentEdge;
                    s.insert({dist[nbr], nbr});
                }
            }
        }


    }


};

int main(){

    

return 0;
}