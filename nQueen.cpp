#include<bits/stdc++.h>
using namespace std;
#define N 4

bool isSafe(int board[][N],int row,int col){
    int i,j;

    //check for left upper diagonal (row-col)
    for(i=row,j=col;i>=0 && j>=0;i--,j--){
        if(board[i][j])
            return false;
    }

    //check for right upper diagonal (row+col)
    for(i=row,j=col;i>=0 && j<N;i--,j++){
        if(board[i][j])
            return false;
    }

    //check for upper col
    for(i=row;i>=0;i--){
        if(board[i][col])
            return false;
    }

    //if every condition satisfies
    return true;
}

bool solveNQ(int board[][N],int row) {

    //Base condition
    if(row>=N){
        return true;
    }
    int i,j;
    //Filling Queen row wise
    for(i=0;i<N;i++){

        //check if it is safe to placed the Queen in (i,j)
        if(isSafe(board,row,i)){
            board[row][i]=1;

            //move to next row to placed another Queen
            if(solveNQ(board,row+1))
                return true;

            //backtracking
            board[row][i]=0;
        }
    }
    //if Queen cannot be placed in any column
    return false;
}

int main() {
    int board[N][N]={{0,0,0,0},
                     {0,0,0,0},
                     {0,0,0,0},
                     {0,0,0,0}};

    if(solveNQ(board,0)==false)
    {
        cout<<"No solution "<<endl;
    }

    //print output

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++) {
            if(board[i][j]==1)
                cout<<"Q ";
            else cout<<"- ";
        }
        cout<<endl;
    }



    return 0;
}
