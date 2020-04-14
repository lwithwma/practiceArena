#include<bits/stdc++.h>
using namespace std;
void max_heapify(int arr[],int i,int n){
    int largest;
    int l=2*i+1;
    int r=2*i+2;
    if(l<=n && arr[l]>arr[i])
        largest=l;
    else
        largest=i;

    if(r<=n && arr[r]>arr[largest])
        largest=r;

    if(largest!=i){
        swap(arr[i],arr[largest]);
        max_heapify(arr,largest,n);
    }


}

int main(){

    int arr[]={20,10,33,11,0,7,1};
    int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++)
         cout<<arr[i]<<" ";
         cout<<"\n";
    for(int i=n/2-1;i>=0;i--)
         max_heapify(arr,i,n);

    for(int i=0;i<n;i++)
         cout<<arr[i]<<" ";
    return 0;
}
