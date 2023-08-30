#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[V];
    }
    void addedge(int i, int j, bool undir = true)
    {
        l[i].push_back(j);
        if (undir)
        {
            l[j].push_back(i);
        }
    }

    void printAdjList()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << "-->";
            for (auto node : l[i])
            {
                cout << node << ",";
            }
            cout << endl;
        }
    }

    // void bfs(int source){
    //     queue<int> q;
    //     bool*visited = new bool[V]{0};

    //     q.push(source);
    //     visited[source] = true;

    //     while(!q.empty()){
    //         int f = q.front();
    //         cout<<f<<endl;
    //         q.pop();

    //         for(auto nbr: l[f]){
    //             if(!visited[nbr]){
    //                 q.push(nbr);
    //                 visited[nbr] = true;
    //             }
    //         }
    //     }
    // }

    void dfsHelper(int node, bool *visited)
    {
        visited[node] = true;
        cout << node << " ";
        for (int nbr : l[node])
        {
            if (!visited[nbr])
            {
                dfsHelper(nbr, visited);
            }
        }
        return;
    }

    void dfs(int source)
    {
        bool *visited = new bool[V]{0};
        dfsHelper(source, visited);
    }
};


int main()
{
    Graph g(7);
    g.addedge(0, 1);
    g.addedge(1, 2);
    g.addedge(2, 3);
    g.addedge(3, 5);
    g.addedge(5, 6);
    g.addedge(4, 5);
    g.addedge(0, 4);
    g.addedge(3, 4);
    g.addedge(2, 3);

    g.dfs(1);

    return 0;
}