//Count ways to reach the nth stair using step 1, 2 or 3

#include<bits/stdc++.h>
using namespace std;

int countSteps(int n)
{
    int output[n]={0};
    output[0]=1;
    output[1]=1;
    output[2]=2;
    for(int i=3;i<=n;i++)
    {
        output[i]=output[i-1]+output[i-2]+ output[i-3];
    }

    return output[n];
}

int main()
{
    int n;
    cin>>n;
    cout<<countSteps(n)<<endl;


    return 0;
}
