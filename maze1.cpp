//moving from (0,0) to (2,2) if path is present
//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool findPath(int maze[][20],int x,int y,int n,int path[][20]){
    if(x<0 || x>=n || y<0 || y>=n){
        return false;
    }
    if(x==n-1 && y==n-1){
            path[x][y]=1;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<path[i][j]<<" ";
                }
                 cout<<"\n";
            }
            cout<<"\n";
        return true;
    }



    if(maze[x][y]==0 || path[x][y]==1){
        return false;
    }



    path[x][y]=1;

    //Right
    if(findPath(maze,x,y+1,n,path)){
       // path[x][y]=0;
        return true;
    }

    //Left
    if(findPath(maze,x,y-1,n,path)){
        //path[x][y]=0;
        return true;
    }

    //Top
    if(findPath(maze,x-1,y,n,path)){
        //path[x][y]=0;
        return true;
    }

    //Down
    if(findPath(maze,x+1,y,n,path)){
       // path[x][y]=0;
        return true;
    }

    path[x][y]=0;
    return false;
}

bool findPath(int maze[][20],int n){
    int path[20][20]={0};

    return findPath(maze,0,0,n,path);
}
bool fun(){
    return false;
}

int main(){
    int maze[][20]={{1,1,0},
                    {1,1,0},
                    {0,1,1}};
    int path[20][20]={0};

    //cout<<"Result:"<<findPath(maze,0,0,3,path);
  // cout<<"Ans:"<<findPath(maze,3);
    //cout<<fun();
    findPath(maze,0,0,3,path);

    return 0;
}
