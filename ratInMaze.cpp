#include<bits/stdc++.h>
using namespace std;
#define N 10

void printPath(int path[][N],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<path[i][j]<<" ";
        }
    }
}

void solveMaze(int mat[][N],int path[][N],int n,int x,int y){
  if(x==n-1 && y==n-1){
        path[x][y]=1;
    printPath(path,n);
    cout<<endl;
  path[x][y]=0;
    return;
  }

  if(x>=0 && y>=0 && x<n && y<n && mat[x][y] && !path[x][y]){
    path[x][y]=1;
    //move up
    solveMaze(mat,path,n,x-1,y);

    //move down
    solveMaze(mat,path,n,x+1,y);

    //move left
    solveMaze(mat,path,n,x,y-1);

    //move right
    solveMaze(mat,path,n,x,y+1);

    path[x][y]=0;

  }
  return ;
}


int main(){

  int n,i,j;
  cin>>n;
  int mat[N][N];
  int path[N][N]={0};

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cin>>mat[i][j];
    }
  }
  solveMaze(mat,path,n,0,0);

}
