#include<bits/stdc++.h>
using namespace std;

void bfs(int s, vector<int> adj[], bool vis[])
{
    queue<int> que;
    vis[s]=true;
    cout<<s;
    que.push(s);
    while(!que.empty()){
        int u=que.front();
        que.pop();
        for(auto x:adj[u]){
            cout<<" "<<x;
            vis[x]=true; //wrong answer
            que.push(x);
        }
    }

}
//Position this line where user code will be pasted.
int main()
{
    int T;
    cin>>T;



        int N, E;
        cin>>N>>E;
        vector<int> adj[N];
        bool vis[N];
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
        }

        bfs(0, adj, vis);
        cout<<endl;

}
