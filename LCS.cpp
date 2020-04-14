/* A Naive recursive implementation of LCS problem */
#include<bits/stdc++.h>
using namespace std;

int lcs(string x,string y,int m ,int n)
{
    if(m==0 || n==0)
        return 0;
    if(x[m-1]==y[n-1])
        return 1+lcs(x,y,m-1,n-1);
    else
        return max(lcs(x,y,m,n-1),lcs(x,y,m-1,n));
}

int main()
{
    string x="AGGTAB";
    string y="GXTXAYB";

    int m=x.length();
    int n=y.length();

    cout<<"length of Longest Common Subsequence is:"<<lcs(x,y,m,n);

    return 0;
}
