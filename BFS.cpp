#include<bits/stdc++.h>
using namespace std;
//const int n=4;


void bfs(int arr[][4],int v,int n){
    int i;
    queue<int> exp;
    int vit[n]={0};
    //search start from node 0
    vit[v]=1;
    exp.push(v);
    cout<<v<<" ";
    while(!exp.empty()){
        int u=exp.front();
        exp.pop();
        for(i=0;i<n;i++){
            if(arr[u][i]==1 && vit[i]==0){
                cout<<i<<" ";
                vit[i]=1;
                exp.push(i);
            }
        }
    }


}

void dfs(int arr[][4],int v,int n){
    static int visited[4]={0};
    if(visited[v]==0){
        cout<<v<<" ";
        visited[v]=1;
        for(int i=0;i<n;i++){
            if(arr[v][i]==1){
                dfs(arr,i,n);
            }
        }
    }

}


int main(){
    int n=4;


    //int n=sizeof(arr[0])/sizeof(arr[0][0]);
    //cout<<n;
    int arr[][4]={{0,1,1,0},{1,0,0,1},{1,0,0,1},{0,1,1,0}};
    cout<<"BFS:";bfs(arr,1,n);
    cout<<"\nDFS:";dfs(arr,1,n);

    return 0;


}
