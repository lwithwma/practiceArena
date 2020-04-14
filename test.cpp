#include<bits/stdc++.h>
using namespace std;

int main()
{
  int arr[]={2,4,1,3,5};
  int n,i,j;
  n=sizeof(arr)/sizeof(arr[0]);
  
  multiset<int> st;
  for(i=0;i<n;i++)
     st.insert(arr[i]);

 for(auto it=st.begin();it!=st.end();it++)
   cout<<*it<<" ";
  

 return 0;
}
