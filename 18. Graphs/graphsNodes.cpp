#include<iostream>
#include<vector>
#include<cstring>
#include<list>
#include<unordered_map>
using namespace std;

class Node{
public:
    string name;
    list<string> nbrs;

    Node(string name){
        this->name = name;
    }
};

class Graph{
    unordered_map<string, Node*> m;
public: 

    Graph(vector<string> cities){
        for(auto city: cities){
            m[city] = new Node(city);
        }
    }

    void addedge(string x, string y, bool undir = false){
        m[x]->nbrs.push_back(y);
        if(undir){
            m[y]->nbrs.push_back(x);
        }
    }

    void printAdjList(){
        for(auto cityPair: m){
            auto city = cityPair.first;
            Node* node = cityPair.second;

            cout<<city<<"-->";

            for(auto nbr : node -> nbrs){
                cout<<nbr<<", ";
            }

            cout<<endl;
        }
    }

};

int main(){

    vector<string> cities = {"Delhi","London","Paris","New York"};
    Graph g(cities);

    g.addedge("Delhi","London");
    g.addedge("New York","London");
    g.addedge("Delhi","Paris");
    g.addedge("Delhi","New York");

    g.printAdjList();    

return 0;

}