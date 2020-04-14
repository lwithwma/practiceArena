#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;//# of vertices
    list<pair<int ,int>> *adj;

public:
    Graph(int V){
        this->V=V;
        adj=new list<pair<int,int>> [V];
    }

    //fun to add an edge to graph
    void addEdge(int u,int v,int w);

    //print MST using Prims algo
    void primMST();

};

void Graph::addEdge(int u,int v,int w){
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(u,w));
}

int main(){

}
