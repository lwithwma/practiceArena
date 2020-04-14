
#include<bits/stdc++.h>
using namespace std;

int check(int sum)
{
    for(int i=2;i<sum;i++)
    {
        if(sum/i==0)
         return 0;
    }
    return 1;
}

int main()
{
    //ios_base::sync_with_stdio(false);
   // cin.tie(0);
    int a,b,num,rem,sum=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        while(rem)
        {
            num=i%10;
            rem=i/10;
            sum+=num;
        }
        if(check(sum))
        {
            cout<<sum<<" ";
        }

    }



    return 0;
}

