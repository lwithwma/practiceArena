//Longest Increasing Subsequence

#include<bits/stdc++.h>
using namespace std;

int lis(int *arr,int n)
{
    int * output=new int[n];
    output[0]=1;
    int i,j;
    for(i=1;i<n;i++)
    {
        output[i]=1;
        for(j=i-1;j>=0;j--)
        {
            if(arr[i]>arr[j])
            {
                if(output[i]<=output[j])
                {
                    output[i]=1+output[j];
                }
            }
        }
    }

    int ans=output[0];
    for(i=1;i<n;i++)
    {
        if(ans<output[i])
            ans=output[i];

    }
    delete [] output;
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<lis(arr,n)<<endl;
    delete [] arr;
    return 0;
}
