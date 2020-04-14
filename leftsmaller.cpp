#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> arr){
    for(int i=1;i<arr.size();i++){
        if(arr[i]>arr[i-1]){
            return true;
        }

    }
    return false;
}

int main(){
    int n,i,v,cou=0;
    vector<int> arr;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>v;
        arr.push_back(v);
    }

    while(check(arr)){
           int i;
        for(i=1;i<arr.size();i++){
            if(arr[i]>arr[i-1]){
                arr.erase(i);
            }
        }
    }
}
