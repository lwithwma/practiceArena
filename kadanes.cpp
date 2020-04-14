//Find max subset sum in the array
#include<bits/stdc++.h>
using namespace std;

void findMax(int arr[],int n)
{
    int i,j,left=0,right=0;
    int maxSum=0;
    int max_so_far=0;
    for(i=0;i<n;i++)
    {
        max_so_far+=arr[i];
        if(max_so_far>maxSum)
        {
            maxSum=max_so_far;
            right=i;
        }

        if(max_so_far<0)
        {
            max_so_far=0;
            left=i+1;
        }

    }

    cout<<maxSum<<endl;
    cout<<"("<<left<<","<<right<<")"<<endl;
}

int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    findMax(arr,n);

    return 0;
}
