#include<bits/stdc++.h>
using namespace std;
#define N 4

void bfs(int start,vector<int> mat[N])
{
    bool visited[N]={false};
    queue<int> que;
   visited [start]=true;
   que.push(start);
   while(!que.empty())
   {
       int temp=que.front();
       cout<<temp<<" ";
       //int temp=que.pop();
       que.pop();
       vector<int> ::iterator it;

       for(it=mat[temp].begin();it!=mat[temp].end();it++)
       {
           if(visited[*it]==false)
           {
               que.push(*it);
               visited[*it]=true;
           }

       }
   }


}

void dfsUtil(int start,vector<int> mat[N],bool visited[])
{
    vector<int> ::iterator it;
    cout<<start<<" ";
    visited[start]=true;

    for(it=mat[start].begin();it!=mat[start].end();it++)
    {
        if(visited[*it]==false)
        {

            dfsUtil(*it,mat,visited);
        }
    }
}

void dfs(int start,vector<int> mat[N])
{
    bool visited[N]={false};
    dfsUtil(start,mat,visited);
}

int main()
{
    vector<int> mat[N];
    mat[0].push_back(1);
    mat[0].push_back(2);
    mat[1].push_back(2);
    mat[2].push_back(0);
    mat[2].push_back(3);
    mat[3].push_back(3);

    int start=2;
    cout<<"BFS :";
    bfs(start,mat);

    cout<<endl<<"DFS :";
    dfs(start,mat);




    return 0;

}
