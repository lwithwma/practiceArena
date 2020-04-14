#include<iostream>
using namespace std;

int main()
{
    int coins[]={2,3,5,10}; //keep coins in ascending order
    int n=sizeof(coins)/sizeof(coins[0]);
    int note=15;

    int table[n][note+1];
    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<=note;j++)
        {
            if(j==0)
            {
                table[i][j]=1;
                continue;
            }

            if(coins[i]>j)
            {
                table[i][j]=((i-1)>=0)?table[i-1][j]:0;
                continue;
            }
            int x= ((i-1)>=0)?table[i-1][j]:0; //excluding the new coin;
            int y=table[i][j-coins[i]]; //including the new coins
            table[i][j]=x + y;//table[i][j-coins[i]];
        }
    }
    cout<<table[n-1][note]<<endl;;
   for(i=0;i<n;i++)
   {
       for(j=0;j<=note;j++)
        cout<<table[i][j]<<" ";

       cout<<endl;
   }

    return 0;
}
