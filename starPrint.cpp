#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j;
    cout<<"Enter no of rows: ";
    cin>>i;
    cout<<endl;
     int s=i;
    for(;i>0;i--){
        for(j=2*i-1;j>0;j--){
            cout<<"* ";
        }

        cout<<"\n";
        int ss=s-i+1;
        while(ss){
                cout<<"  ";
                ss--;
        }

    }
}
