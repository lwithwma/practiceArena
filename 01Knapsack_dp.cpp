//01 Knapsack is a dynamic programming problem. 

#include<iostream>
using namespace std;

int main()
{
    int val[]={0,60,100,120};
    int wt[]={0,10,20,30};
    int w=50;
    int n=sizeof(val)/sizeof(val[0]);
   // cout<<ks(w,wt,val,n-1);
    int mat[n][w+1];
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=w;j++)
        {
            if(i==0 || j==0)
                {mat[i][j]=0; continue;}
            if(wt[i]>j)
            {
                mat[i][j]=mat[i-1][j];
            }else
            {
                mat[i][j]=max(mat[i-1][j] , val[i]+ mat[i-1][j-wt[i]]);
            }

        }
    }
    //cout<<mat[n-1][w-1];
    for(i=0;i<n;i++)
    {

        for(j=0;j<=w;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
