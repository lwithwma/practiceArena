//All possible path from (0,0) to (2,2)
#include<iostream>
using namespace std;

void findPath(int maze[][20],int x,int y,int n,int path[][20]){
    if(x<0 || x>=n || y<0 || y>=n){
        return;
    }
    /*if(maze[x][y]==0){
        return ;
    }*/
     if(x==n-1 && y==n-1){
        path[x][y]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<path[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
        path[x][y]=0;
        return;
    }

    if(maze[x][y]==0 || path[x][y]==1){
        return;
    }

    path[x][y]=1;
    //Right
    findPath(maze,x,y+1,n,path);
    //Left
    findPath(maze,x,y-1,n,path);
    //TOP
    findPath(maze,x-1,y,n,path);
    //Bottom
    findPath(maze,x+1,y,n,path);

   path[x][y]=0;
   return;



}


int main(){
    int maze[][20]={{1,1,0},
                    {1,1,0},
                    {0,1,1}};
    int path[20][20]={0};

    //cout<<"Result:"<<findPath(maze,0,0,3,path);
  // cout<<"Ans:"<<findPath(maze,3);
    //cout<<fun();
    int n=3;
    findPath(maze,0,0,3,path);

    //for checking the value of path after finding all the paths.
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<path[i][j]<<" ";
            }
            cout<<"\n";
        }

    return 0;
}
