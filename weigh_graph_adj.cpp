#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<pair<int,int> > > mat,int u,int v,int w){
    mat[u].push_back(make_pair(v,w));
    mat[v].push_back(make_pair(u,w));
}

int main(){
    int v=5;//# of vertices
    vector<vector<pair<int,int> > > mat;
    addEdge(mat,0,1,10);
    addEdge(mat,0,4,20);

    addEdge(mat,1,4,50);
    addEdge(mat,1,3,40);
    addEdge(mat,1,2,30);

    addEdge(mat,2,3,60);
    addEdge(mat,3,4,70);


    return 0;
}
