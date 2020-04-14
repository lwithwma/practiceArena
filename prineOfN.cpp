#include<bits/stdc++.h>
using namespace std;

void prime(int n){
    int i,j;
    bool p[n+1];
    memset(p,true,sizeof(p));
   // cout<<p[10];
   for(i=2;i*i<=n;i++){
    if(p[i]==true) {
        for(j=i*i;j<=n;j+=i) {
            p[j]=false;
        }
    }
   }
   for(i=2;i<=n;i++){
    if(p[i]==true){
        cout<<i<<" ";
    }
   }
}

int main(){
    int n=20;
    prime(n);

    return 0;
}
