#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int i;
    cin>>s;
    cout<<"You have entered "<<s<<endl;
    for(i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            s.erase(i,2);
            i=0;
        }
    }
    if(s.length()>=2){
        if(s[0]==s[1]){
            s.erase(0,2);
        }
    }
    cout<<s;

    return 0;
}
