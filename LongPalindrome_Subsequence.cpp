#include<bits/stdc++.h>
using namespace std;

int LPSubsec(string s,int l,int r){
    if(l>r) return 0;
    if(l==r) return 1;
    if(s[l]!=s[r]){
        return max(LPSubsec(s,l,r-1),LPSubsec(s,l+1,r));
    }else if(s[l]==s[r]){
        return LPSubsec(s,l+1,r-1)+2;
    }

 //return 0;
}


int LPS(string s)
{
  int n=s.length();
  int l=0,i,j;
  int dp[n][n];

  //length 1
  for(i=0;i<n;i++){
    dp[i][i]=1;
  }

  int d; //different d=j-i
  for(d=1;d<n;d++){
    for(i=0;i<n-d;i++){
        j=d+i;
       // if(i==j) dp[i][j]=1;
       if(s[i]!=s[j]){
        dp[i][j]=max(dp[i][j-1],dp[i+1][j]);
       }else{
           dp[i][j]=dp[i+1][j-1]+2;
       }
    }
  }

 return dp[0][n-1];
}


int main(){
    string s="agbdba";

    cout<<"Recursion: "<<LPSubsec(s,0,s.length()-1)<<endl;
    cout<<"DP :"<<LPS(s)<<endl;

    return 0;
}
