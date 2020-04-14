/* A DP implementation of LCS problem */
#include<bits/stdc++.h>
using namespace std;

int lcs(string x,string y)
{
    int i,j;
    int xn=x.size();
    int yn=y.size();
    int result[xn+1][yn+1];
    for(i=0;i<=xn;i++)
    {
        for(j=0;j<=yn;j++)
        {
            if(i==0 || j==0)
            {
                result[i][j]=0;
                continue;
            }
            if(x[i-1]==y[j-1])
            {
                result[i][j]=1+ result[i-1][j-1];
            }else{
                result[i][j]=max(result[i-1][j],result[i][j-1]);
            }
        }
    }
    return result[xn][yn];
}

int main()
{
    string x="AGGTAB";
    string y="GXTXAYB";

    int m=x.length();
    int n=y.length();

    cout<<"length of Longest Common Subsequence is:"<<lcs(x,y);

    return 0;
}
